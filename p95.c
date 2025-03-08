//input : 4
//output : A    B   c   D

//high level (if it give out put tehn only try otherwise use p93 method)

#include<stdio.h>


void Display(int ino)
{
    int icnt = 0;
    char ch = '\0';

    for(icnt = 1, ch = 'A'; icnt <= ino; icnt++, ch++)
    {
        printf("%c\t",ch);
        
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

