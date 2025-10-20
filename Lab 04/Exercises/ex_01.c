#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char name[50];
    char email[50];
    char phone[20];
};

int main() {
    struct Contact *contacts = NULL;
    int count = 0;
    int choice, index;

    while (1) {
        printf("\n--- Address Book ---\n");
        printf("1. Add Contact\n2. View Contacts\n3. Delete Contact\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        if (choice == 1) {
            // Increase memory for one more contact
            contacts = realloc(contacts, (count + 1) * sizeof(struct Contact));
            if (!contacts) {
                printf("Memory allocation failed!\n");
                exit(1);
            }

            printf("\nEnter name: ");
            fgets(contacts[count].name, 50, stdin);
            contacts[count].name[strcspn(contacts[count].name, "\n")] = '\0';

            printf("Enter email: ");
            fgets(contacts[count].email, 50, stdin);
            contacts[count].email[strcspn(contacts[count].email, "\n")] = '\0';

            printf("Enter phone: ");
            fgets(contacts[count].phone, 20, stdin);
            contacts[count].phone[strcspn(contacts[count].phone, "\n")] = '\0';

            count++;
        }

        else if (choice == 2) {
            printf("\n--- Contact List ---\n");
            for (int i = 0; i < count; i++) {
                printf("%d. %s | %s | %s\n", i + 1, contacts[i].name, contacts[i].email, contacts[i].phone);
            }
        }

        else if (choice == 3) {
            printf("\nEnter contact number to delete: ");
            scanf("%d", &index);
            if (index < 1 || index > count) {
                printf("Invalid index.\n");
                continue;
            }
            // Shift contacts to fill the gap
            for (int i = index - 1; i < count - 1; i++) {
                contacts[i] = contacts[i + 1];
            }
            count--;
            contacts = realloc(contacts, count * sizeof(struct Contact));
        }

        else if (choice == 4) {
            free(contacts);
            break;
        }
    }
    return 0;
}
