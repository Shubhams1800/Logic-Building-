//convert the string capital to small


#include<stdio.h>

void strupX(char str[])     //struprX used for samll to capital
{

    while (*str != '\0')        
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
       
        str++;
    }


    
}

int main()
{
    char Arr[20];


    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    strupX(Arr);

    printf("Updated string is : %s \n",Arr);

    return 0;

   
}