#include<stdio.h>

void display(int ino)
{
    int idigit = 0;

    printf("value of ino is : %d \n", ino); //721

    idigit = ino % 10;
    printf("digit is : %d \n", idigit);   //1
    ino = ino / 10;     //72
    printf("value of ino is : %d \n", ino);

    idigit = ino % 10;
    printf("digit is: %d \n", idigit);   //2
    ino = ino / 10;     //7
    printf("value of ino is : %d \n", ino);

    idigit = ino % 10;
    printf("digit is: %d \n", idigit);   //7
    ino = ino / 10;     //0
    printf("value of ino is : %d \n", ino);

}


int main()
{
    int ivalue = 721;

    //printf("Enter number: \n");
    //scanf("%d", &ivalue);

    display(ivalue);


    return 0;
}