// count the no of small ovels in string    (Case sensetive)


#include<stdio.h>

int CountOvel(char str[])      
{
    int icnt = 0;

    while (*str != '\0')        
    {
        if((*str == 'a') || (*str == 'e')|| (*str == 'i')|| (*str == 'o')|| (*str == 'u'))
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