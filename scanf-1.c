/**
 * this implements a buggy and dangerous method to get a string from a user
 * that might allow an adversary to take over the program.
 *
 * since we don't give scanf a memory value in which to place s, it will induce
 * a segmentation fault and return NULL
 *
 */
 
 #include <stdio.h>
 
 int main(void)
 {
    char* s;
    printf("String please: ");
    
    scanf("%s", s);
    printf("Thanks for the %s!\n", s);
 }
