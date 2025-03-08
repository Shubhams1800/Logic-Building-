//input : 4
//output : a    b   c   d

//company requirement

#include<stdio.h>


void Display(int ino)
{
    int icnt = 0;
    char ch = 'a';

    for(icnt = 1; icnt <= ino; icnt++, ch++)
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

