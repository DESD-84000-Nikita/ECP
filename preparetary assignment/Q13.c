/*Declare an Array of type char* and initialize it with a few strings (hard-
coded). Display the strings which are duplicated in that array.*/

#include <stdio.h>
#include <string.h>

int main() {
    const char* strings[] = {"a", "o", "b", "a", "g", "b","g"};
    int size = sizeof(strings) / sizeof(strings[0]);

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("Duplicate: %s\n", strings[i]);
                break;  
            }
        }
    }

    return 0;
}
