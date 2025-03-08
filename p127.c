//no of a in given string

#include<stdio.h>

int strlenX(char str[])        //strlenX is the standerd name for the define the len of the string
{
    int icnt = 0;

    while (*str != '\0')
    {
       if(*str == 'a')
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

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iret = strlenX(Arr);

    printf("Count of a in the string is : %d \n",iret);

    return 0;

   
}