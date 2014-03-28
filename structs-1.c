/**
 * this program prompts the user for the names and houses of 3 studends and
 * stores that information in a .csv
 */
 
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h> // functions related to file i/o
#include <string.h>
 
#include "structs.h"
 
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
    
    // fopen opens a file
    FILE* file = fopen("students.csv", "w"); // "w" indicates file opened for writing
    
    // fprintf prints to a file
    if (file != NULL)
    {
        for (int i = 0; i < STUDENTS; i++)
        {
            fprintf(file, "%s, %s\n", students[i].name, students[i].house);
        }   
        
        // fclose closes a file    
        fclose(file);
    }
 
    for (int i = 0; i < STUDENTS; i++)
    {
        free(students[i].name);
        free(students[i].house);
    }
}
