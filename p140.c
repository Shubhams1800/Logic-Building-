//convert the string capital to small and samll to capital


#include<stdio.h>

void strtoggleX(char str[])     //strtoggleX used for capital to samll 
{

    while (*str != '\0')        
    {
        if((*str >= 'a' && *str <= 'z'))
        {
            *str = *str - 32;
        }

        else if((*str >= 'A' && *str <= 'Z'))
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

    strtoggleX(Arr);

    printf("Updated string is : %s \n",Arr);

    return 0;

   
}