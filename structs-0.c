/**
 * this program stores the names and houses of 3 students
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

#include "structs.h"

// define constant STUDENTS as 3
#define STUDENTS 3

int main(void)
{
    student students[STUDENTS];
    
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student's name: ");
        students[i].name = GetString();
        
        printf("Student's house: ");
        students[i].house = GetString();
    }
    
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("%s is in %s.\n", students[i].name, students[i].house);
    }
    
    for (int i = 0; i < STUDENTS; i++)
    {
        free(students[i].name);
        free(students[i].house);
    }
}
