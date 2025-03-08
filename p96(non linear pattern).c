
/*output :

*  *   *   *    
*  *   *   *    
*  *   *   *    
*/

//rows === Advya pattya
//coumns === ubhya pattya

#include<stdio.h>



void Display()
{
    int icnt1 = 0;
    int icnt2 = 0;

    
 
        for(icnt2 = 1; icnt2 <= 4; icnt2++)     //column
        {
            printf("*\t");
        }
        printf("\n");

        for(icnt2 = 1; icnt2 <= 4; icnt2++)     //column
        {
            printf("*\t");
        }

        printf("\n");        

        for(icnt2 = 1; icnt2 <= 4; icnt2++)     //column
        {
            printf("*\t");
        }

     
}

int main()
{




    Display();


    return 0;
}