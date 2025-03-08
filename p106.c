
/*output :

1   *   3   *
1   *   3   *
1   *   3   *
1   *   3   *

*/

//rows === Advya pattya
//coumns === ubhya pattya

#include<stdio.h>



void Display(int irow , int icol)
{
    int icnt1 = 0;
    int icnt2 = 0;

    for(icnt1 = 1; icnt1 <= irow; icnt1++)     //rows
    {
        for(icnt2 = 1; icnt2 <= icol; icnt2++)     //column
        {
            if((icnt2 % 2) == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",icnt2);
            }

        }

        printf("\n\n");

    }
}

int main()
{

    int ino1, ino2 = 0;

    printf("Enter the number of rows: \n");
    scanf("%d", &ino1);

    printf("Enter the number of columns: \n");
    scanf("%d",&ino2);

    Display(ino1, ino2);

    return 0;
}