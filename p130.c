// count the no of capital char in string


#include<stdio.h>

int CountCapital(char str[])     
{
    int icnt = 0;

    while (*str != '\0')        
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iret = CountCapital(Arr);

    printf("Count Of letter : %d \n",iret);

    return 0;

   
}