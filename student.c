#include "student.h"

/* [TODO]
   Implement function createStudents
*/
Student createStudents

/* [TODO]
   Implement function newStudent
*/

/* [TODO]
   Implement function appendStudent
*/
void appendStudent(Student *students, int idx, Student student)

void printStudents(FILE *output, Student *students, int length) {
  for (int i = 0; i < length; i++) {
    fprintf(output, "name: %s id: %d\n", students[i].name, students[i].id);
  }
}

/* [TODO]
   Implement function freeStudents
*/

void freeStudents();
