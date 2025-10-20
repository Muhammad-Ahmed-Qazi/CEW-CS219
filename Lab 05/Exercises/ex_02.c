// Create a program that reads a text file and counts the number of words in it. Display the total number of words at the end.
// Assumed definition of a word:
// Word is a sequence of characters separated by the following characters: space (' '), newline ('\n'), tab ('\t'), comma (','), period ('.'), exclamation mark ('!'), question mark ('?'), semicolon (';'), colon (':'), hyphen ('-'), and parentheses ('(', ')').
#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fptr;
    char ch;
    int in_word = 0;
    int word_count = 0;

    fptr = fopen("lab_05_ex_02.txt", "r");
    if (fptr == NULL) {
        printf("Unable to open the file in reading mode.\n");
    } else {
        while ((ch = fgetc(fptr)) != EOF) {
            switch (ch) {
                case ' ':
                case '\n':
                case '\t':
                case ',':
                case '.':
                case '!':
                case '?':
                case ';':
                case ':':
                case '-':
                case '(':
                case ')':
                    if (in_word) {
                        in_word = 0;
                    }
                    break;
                default:
                    if (!in_word) {
                        in_word = 1;
                        word_count++;
                    }
                    break;
            }
        }
    }
    fclose(fptr);

    printf("Total number of words in the file: %d\n", word_count);
    
    return 0;
}