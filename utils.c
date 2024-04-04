#include "utils.h"

SortBy setSortBy(const char *filename) {
    if (strstr(filename, "name")) {
        return NAME;
    }

    if (strstr(filename, "id")) {
        return ID;
    }

    exit(EXIT_FAILURE);
}

int countLines(FILE *input) {
    int count = 0;
    
    char line[MAX_BUFFER_SIZE];
    while (fgets(line, MAX_BUFFER_SIZE, input) != NULL) {
        count++;
    }

    rewind(input);
    
    return count;
}

/* [TODO]
   Implement function swap
*/

void swap(Student *student, Student *Student)
{
    if()
}