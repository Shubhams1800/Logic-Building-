#include<stdio.h>

int main()
{
    int icnt = 0;

    printf("---------------------------------------------------------- \n");
    printf("-----------------------ASCII TABLE-------------------------\n");
    printf("-----------------------------------------------------------\n");

    for(icnt = 0; icnt <= 127; icnt++)
    {
        printf("%c\t%d\t%o\t%x",icnt,icnt,icnt,icnt);

    }

    printf("------------------------------------------------------------\n");

    return 0;
}