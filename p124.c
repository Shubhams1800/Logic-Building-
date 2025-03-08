#include<stdio.h>

void display(char *str)
{
    printf("String is : %s \n", str);
}

int main()
{
    char Arr[20];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    display(Arr);
}