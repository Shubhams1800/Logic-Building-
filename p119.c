//capital to small

#include<stdio.h>
#include<stdbool.h>


bool ConvertSmall(char cValue)
{
    return cValue + 32;
}


int main()
{

    char ch = '\0';
    bool cret = '\0';

    printf("Enter the character :  \n");
    scanf("%c", &ch);       //enter the capital only

    cret = ConvertSmall(ch);

    printf("Converted small latter is : %c\n", cret);

    return 0;
}