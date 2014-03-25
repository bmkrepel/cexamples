/**
 * program take one and only one CLI: number of dolphins to be trained
 * Alow the trainer to enter an age for each dolphin
 * store ages in array
 * call function with prototype: int* getAge(void);
 * print out age of oldest dolphin
 *
 */
 
 #include <stdio.h>
 #include <cs50.h>
 #include <stdlib.h>
 
 // prototype
 int* getAge(void);
 
 int main(int argc, char* argv[])
{
    // check for proper usage (# of arguments)
    if(argc != 2)
    {
        printf("usage: ./trainier dolphins\n");
        return 1;
    }
 
    // turn string into int
    int dolphins = atoi(argv[1]);
    
    // ensure number of dolphins < 0
    if (dolphins < 1)
    {
        printf("Please enter a positive number of dolphins. \n");
        return 2;
    }
    
    // create array of size arg
    int* dolphin_ages[dolphins]; 
    
    // for each dolphin
    for(int i = 0; i < dolphins; i++)
    {
        // call getAge(void)
        dolphin_ages[i] = getAge();    
    }
    // search for oldest
    int oldest = 0;
    for (int i = 0; i < dolphins; i++)
    {
        if (*dolphin_ages[i] > oldest)
        {
            oldest = *dolphin_ages[i];
        }

    }
    // print out oldest    
    printf("The oldest dolphin you are training is %i years old!\n", oldest);
}

/**
 * getAge()
 */
int* getAge(void)
{ 
    // ask user for an age
    int* age = malloc(sizeof(int));
    do
    {
        printf("How old is the dolphin (> 0)? ");
        *age = GetInt();
    }
    while (*age < 1);
    
    // return the age
    return age; 
} 
