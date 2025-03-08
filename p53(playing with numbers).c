#include<stdio.h>

void display(int ino)
{
    int idigit = 0;

    idigit = ino % 10;
    printf("%d", idigit);   //1
    ino = ino / 10;     //72

    idigit = ino % 10;
    printf("%d", idigit);   //2
    ino = ino / 10;     //7

    idigit = ino % 10;
    printf("%d", idigit);   //7
    ino = ino / 10;     //0

}


int main()
{
    int ivalue = 721;

    //printf("Enter number: \n");
    //scanf("%d", &ivalue);

    display(ivalue);


    return 0;
}