//calculation of specific char in string 


#include<stdio.h>

int Counta(char str[], char ch)        //strlenX is the standerd name for the define the len of the string
{
    int icnt = 0;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            icnt++;
        }

        str++;
    }

    return icnt;
    
}

int main()
{
    char Arr[20];
    int iret = 0;
    char c = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Charater for frequency CAlculation : \n");
    scanf(" %c",&c);        //[space]%c

    iret = Counta(Arr,c);

    printf("Count Of letter : %d \n",iret);

    return 0;

   
}