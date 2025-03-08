// count the no of digits in string


#include<stdio.h>

int CountDigit(char str[])     
{
    int icnt = 0;

    while (*str != '\0')        
    {
        if((*str >= '0') && (*str <= '9'))
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

    iret = CountDigit(Arr);

    printf("Count Of digits is : %d \n",iret);

    return 0;

   
}