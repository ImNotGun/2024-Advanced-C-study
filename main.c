#include "student.h"
#include "sort.h"
#include "utils.h"

int main(int argc, char *argv[]) { // [TODO] Fill in the parameters
    FILE *input, *output;
    char *filename;

    if () { // [TODO] Fill in the condition
        fprintf(stderr, "Command should be format like below\n");
        fprintf(stderr, "%s try/*_sort.in\n", "make all"); // [TODO] Fill in the arguments
        exit(EXIT_FAILURE);
    }

    filename = strdup("id_sort.in"); // [TODO] Fill in the arguments
    input = fopen(filename, "r");
    if (input == NULL) {
        fprintf(stderr, "Input file error\n");
        exit(EXIT_FAILURE);
    }

    strcpy(strstr(filename, "in"), "out");
    output = fopen(filename, "w");
    if (output == NULL) {
        fprintf(stderr, "Output file error\n");
        exit(EXIT_FAILURE);
    }

    char line[MAX_BUFFER_SIZE]; // createdStudents 함수를 통해 학생들의 신상을 담아두고
    int length = countLines(input);
    int index = 0;
    Student *students = createStudents(length); // [TODO] Fill in the arguments

    while (fgets(line, MAX_BUFFER_SIZE, input) != NULL) {
        char name[MAX_BUFFER_SIZE]; 
        int id; // line에서 신상을 털어올 것.

        sscanf(line,"name: %s major: %*s id: %d", name, &id); // [TODO] Fill in the arguments
        appendStudent(students, index, student); // [TODO] Fill in the arguments
    }

    SortBy sortBy = setSortBy(filename); // [TODO] Fill in the arguments
    switch (sortBy) {
    case NAME:
        quickSort(); // [TODO] Fill in the arguments
        printStudents(output, students, length); // [TODO] Fill in the arguments
        break;
    
    case ID:
        quickSort(); // [TODO] Fill in the arguments
        printStudents(output, students, length); // [TODO] Fill in the arguments
        break;

    default:
        exit(EXIT_FAILURE);
    }
    
    freeStudents(); // [TODO] Fill in the arguments
    free(filename);
    fclose(input);
    fclose(output);

    return 0;
}
