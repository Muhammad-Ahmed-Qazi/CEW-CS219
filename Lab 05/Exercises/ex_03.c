// Implement a student database system using a file. Include features to add, delete, modify, and display student records.
// One table only
// Table fields: Student ID, Name, Batch, Department, GPA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a student record
typedef struct {
    int id;
    char name[50];
    char batch[10];
    char department[20];
    float gpa;
} Student;

// Constants
const char *DB_FILE = "student_db.txt";
const char *TEMP_FILE = "temp_db.txt";
const char *DELIMITER = "|"; // Used to separate fields in the text file

// Function prototypes
void add_record();
void display_all_records();
void search_record();
void modify_record();
void delete_record();
void display_menu();

// Utility functions
void clear_input_buffer();
int get_int_input(const char *prompt);
float get_float_input(const char *prompt);

// Main function
int main() {
    int choice;

    do {
        display_menu();
        choice = get_int_input("Enter your choice: ");

        switch (choice) {
            case 1: add_record(); break;
            case 2: display_all_records(); break;
            case 3: search_record(); break;
            case 4: modify_record(); break;
            case 5: delete_record(); break;
            case 6: printf("\nExiting Student Database System. Goodbye!\n"); break;
            default: printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

// Function to display the menu
void display_menu() {
    printf("\n--- Student Database Menu (Text File) ---\n");
    printf("1. Add Student Record\n");
    printf("2. Display All Records\n");
    printf("3. Search Record by ID\n");
    printf("4. Modify Record by ID\n");
    printf("5. Delete Record by ID\n");
    printf("6. Exit\n");
}

// Function to add a new student record
void add_record() {
    FILE *file = fopen(DB_FILE, "a"); // 'a' for append text
    if (file == NULL) {
        perror("Error opening database file");
        return;
    }

    Student s;
    printf("\n--- Add New Record ---\n");

    s.id = get_int_input("Enter Student ID: ");

    printf("Enter Name: ");
    if (fgets(s.name, sizeof(s.name), stdin) == NULL) {}
    s.name[strcspn(s.name, "\n")] = 0; // Remove newline

    printf("Enter Batch: ");
    if (fgets(s.batch, sizeof(s.batch), stdin) == NULL) {}
    s.batch[strcspn(s.batch, "\n")] = 0;

    printf("Enter Department: ");
    if (fgets(s.department, sizeof(s.department), stdin) == NULL) {}
    s.department[strcspn(s.department, "\n")] = 0;

    s.gpa = get_float_input("Enter GPA: ");

    // Write the record to the file using the pipe '|' as a delimiter
    fprintf(file, "%d%s%s%s%s%s%s%s%.2f\n", 
            s.id, DELIMITER, 
            s.name, DELIMITER, 
            s.batch, DELIMITER, 
            s.department, DELIMITER, 
            s.gpa);

    fclose(file);
    printf("\nRecord added successfully!\n");
}

// Function to display all student records
void display_all_records() {
    FILE *file = fopen(DB_FILE, "r"); // 'r' for read text
    if (file == NULL) {
        printf("\nNo records found (File not created yet).\n");
        return;
    }

    Student s;
    int count = 0;

    printf("\n--- All Student Records ---\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("| %-5s | %-48s | %-6s | %-15s | %-4s |\n", "ID", "Name", "Batch", "Dept", "GPA");
    printf("----------------------------------------------------------------------------------------------\n");

    // Format string: %d (ID) | %[^|] (Name) | %[^|] (Batch) | %[^|] (Dept) | %f (GPA)\n
    // Note: %*c consumes the delimiter '|' but doesn't store it.
    char format_str[] = "%d%*c%49[^|]%*c%9[^|]%*c%19[^|]%*c%f\n"; 

    // Loop through the file, reading one line (record) at a time
    while (fscanf(file, format_str, 
                  &s.id, s.name, s.batch, s.department, &s.gpa) == 5) {
        
        printf("| %-5d | %-48s | %-6s | %-15s | %-4.2f |\n", 
               s.id, s.name, s.batch, s.department, s.gpa);
        count++;
    }

    printf("----------------------------------------------------------------------------------------------\n");
    if (count == 0) {
        printf("\nNo active records found.\n");
    }
    
    fclose(file);
}

void search_record() {
    FILE *file = fopen(DB_FILE, "r");
    if (file == NULL) {
        printf("\nNo records found.\n");
        return;
    }

    int target_id = get_int_input("\nEnter ID to search: ");
    Student s;
    int found = 0;
    
    // This is the same format string used in the display function:
    // %d (ID) | %[^|] (Name) | %[^|] (Batch) | %[^|] (Dept) | %f (GPA)\n
    char format_str[] = "%d%*c%49[^|]%*c%9[^|]%*c%19[^|]%*c%f\n"; 

    printf("\n--- Search Results ---\n");

    // Loop through the file, reading one line (record) at a time
    while (fscanf(file, format_str, 
                  &s.id, s.name, s.batch, s.department, &s.gpa) == 5) {
        
        if (s.id == target_id) {
            printf("ID: %d\n", s.id);
            printf("Name: %s\n", s.name);
            printf("Batch: %s\n", s.batch);
            printf("Department: %s\n", s.department);
            printf("GPA: %.2f\n", s.gpa);
            found = 1;
            break; // Stop reading once the record is found
        }
    }

    if (!found) {
        printf("Record with ID %d not found.\n", target_id);
    }
    
    fclose(file);
}

// Function to modify a student record by ID
void modify_record() {
    FILE *original = fopen(DB_FILE, "r");
    FILE *temp = fopen(TEMP_FILE, "w");
    if (original == NULL || temp == NULL) {
        perror("Error opening file(s)");
        if (original) fclose(original);
        if (temp) fclose(temp);
        return;
    }

    int target_id = get_int_input("\nEnter ID to modify: ");
    Student s;
    int found = 0;
    char format_str[] = "%d%*c%49[^|]%*c%9[^|]%*c%19[^|]%*c%f\n";

    while (fscanf(original, format_str, 
                  &s.id, s.name, s.batch, s.department, &s.gpa) == 5) {
        
        if (s.id == target_id) {
            printf("\n--- Modifying Record (ID: %d) ---\n", target_id);
            
            // Get new data
            printf("Enter NEW Name: ");
            if (fgets(s.name, sizeof(s.name), stdin) == NULL) {}
            s.name[strcspn(s.name, "\n")] = 0;

            printf("Enter NEW Batch: ");
            if (fgets(s.batch, sizeof(s.batch), stdin) == NULL) {}
            s.batch[strcspn(s.batch, "\n")] = 0;

            printf("Enter NEW Department: ");
            if (fgets(s.department, sizeof(s.department), stdin) == NULL) {}
            s.department[strcspn(s.department, "\n")] = 0;

            s.gpa = get_float_input("Enter NEW GPA: ");
            
            found = 1;
            // Write the MODIFIED record to the temp file
            fprintf(temp, "%d%s%s%s%s%s%s%s%.2f\n", 
                    s.id, DELIMITER, s.name, DELIMITER, s.batch, DELIMITER, s.department, DELIMITER, s.gpa);
        } else {
            // Write the UNMODIFIED record back to the temp file
            fprintf(temp, "%d%s%s%s%s%s%s%s%.2f\n", 
                    s.id, DELIMITER, s.name, DELIMITER, s.batch, DELIMITER, s.department, DELIMITER, s.gpa);
        }
    }

    fclose(original);
    fclose(temp);

    if (found) {
        // Step 6 & 7: Replace original file with the new one
        remove(DB_FILE);
        rename(TEMP_FILE, DB_FILE);
        printf("\nRecord modified successfully!\n");
    } else {
        remove(TEMP_FILE); // Clean up temp file
        printf("\nRecord with ID %d not found.\n", target_id);
    }
}

// Function to delete a student record by ID
void delete_record() {
    FILE *original = fopen(DB_FILE, "r");
    FILE *temp = fopen(TEMP_FILE, "w");
    if (original == NULL || temp == NULL) {
        perror("Error opening file(s)");
        if (original) fclose(original);
        if (temp) fclose(temp);
        return;
    }

    int target_id = get_int_input("\nEnter ID to delete: ");
    Student s;
    int found = 0;
    char format_str[] = "%d%*c%49[^|]%*c%9[^|]%*c%19[^|]%*c%f\n";

    while (fscanf(original, format_str, 
                  &s.id, s.name, s.batch, s.department, &s.gpa) == 5) {
        
        if (s.id == target_id) {
            // Found the record. DO NOT write it to the temp file (this deletes it).
            found = 1;
        } else {
            // Write the UNMODIFIED record to the temp file
            fprintf(temp, "%d%s%s%s%s%s%s%s%.2f\n", 
                    s.id, DELIMITER, s.name, DELIMITER, s.batch, DELIMITER, s.department, DELIMITER, s.gpa);
        }
    }

    fclose(original);
    fclose(temp);

    if (found) {
        // Step 6 & 7: Replace original file with the new one
        remove(DB_FILE);
        rename(TEMP_FILE, DB_FILE);
        printf("\nRecord for ID %d deleted successfully!\n", target_id);
    } else {
        remove(TEMP_FILE); // Clean up temp file
        printf("\nRecord with ID %d not found.\n", target_id);
    }
}

// Utility function to clear input buffer after reading
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Utility function to get integer input safely
int get_int_input(const char *prompt) {
    int value;
    printf("%s", prompt);
    while (scanf("%d", &value) != 1) {
        printf("Invalid input. Please enter an integer: ");
        clear_input_buffer();
    }
    clear_input_buffer();
    return value;
}

// Utility function to get float input safely
float get_float_input(const char *prompt) {
    float value;
    printf("%s", prompt);
    while (scanf("%f", &value) != 1) {
        printf("Invalid input. Please enter a number: ");
        clear_input_buffer();
    }
    clear_input_buffer();
    return value;
}