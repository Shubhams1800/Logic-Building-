// replace 'a' with the '_' in string


#include<stdio.h>

void Replace(char str[])     
{
    int icnt = 0;

    while (*str != '\0')        
    {
        if((*str == 'a'))
        {
            *str = '_';
        }
        str++;
    }

    return icnt;
    
}

int main()
{
    char Arr[20];


    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    Replace(Arr);

    printf("Updated string is : %s \n",Arr);

    return 0;

   
}