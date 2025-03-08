//convert the string capital to small


#include<stdio.h>

void strlwrX(char str[])     //strlwrX used for capital to samll and X used for user define function
{

    while (*str != '\0')        
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
       
        str++;
    }


    
}

int main()
{
    char Arr[20];


    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Updated string is : %s \n",Arr);

    return 0;

   
}