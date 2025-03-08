// count the no of capital ovels in string      (case sensetive)


#include<stdio.h>

int CountOvel(char str[])      
{
    int icnt = 0;

    while (*str != '\0')        
    {
        if((*str == 'A') || (*str == 'E')|| (*str == 'I')|| (*str == 'O')|| (*str == 'U'))
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

    iret = CountOvel(Arr);

    printf("Count Of digits is : %d \n",iret);

    return 0;

   
}