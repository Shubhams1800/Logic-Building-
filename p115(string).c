//char to decimal
//char to octal
//char to hexa

#include<stdio.h>

int main()
{

    char ch = '\0';

    printf("Enter the character : \n");
    scanf("%c", &ch);

    printf("Ascii value of the character in decimal is : %d \n", ch);

    printf("Ascii value of the character in octal is : %o \n", ch);

    printf("Ascii value of the character in hexadecimal is : %x \n", ch);
    return 0;
}