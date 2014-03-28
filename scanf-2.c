/**
 * this implemplements a proper way to get a string from a user using scanf()
 * by explicitly allocating memory in which to store the string
 *
 * this still isn't an efficient way to get input from a user. It only allows for 
 * 16 bytes, or typicaly 16 chars + NULL character. 
 */
 
 #include <stdio.h>
 
 int main(void)
 {
    char s[16];
    printf("String please: ");
    scanf("%s", s);
    printf("Thanks for the %s!\n", s);
 }
