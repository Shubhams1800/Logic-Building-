//input : 6
//output :*  *   *   *   *   *

#include<stdio.h>


void Display(int ino)
{
    int icnt = 0;
    for(int icnt = 1; icnt <= ino; icnt++)
    {
        printf("*\t");
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