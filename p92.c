//input : 4
//output : a    b   c   d

#include<stdio.h>


void Display(int ino)
{
    int icnt = 0;
    char ch = 'a';

    for(icnt = 1; icnt <= ino; icnt++)
    {
        printf("%c\t",ch);
        ch++;
    }

    printf("\n");
}
int main()
{

    int ivalue = 0;

    printf("Enter the count: \n");
    scanf("%d",&ivalue);


    Display(ivalue);


    return 0;
}

