//input : 4
//output : a    b   c   d

//high level (if it give out put tehn only try otherwise use p93)

#include<stdio.h>


void Display(int ino)
{
    int icnt = 0;
    char ch = '\0';

    for(icnt = 1, ch = 'a'; icnt <= ino; icnt++, ch++)
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

