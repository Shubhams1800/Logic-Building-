// count the no of space in string


#include<stdio.h>

int CountSpace(char str[])     
{
    int icnt = 0;

    while (*str != '\0')        
    {
        if((*str == ' '))
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

    iret = CountSpace(Arr);

    printf("Count Of digits is : %d \n",iret);

    return 0;

   
}