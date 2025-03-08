//small to capital

#include<stdio.h>
#include<stdbool.h>


bool ConvertCapital(char cValue)
{
    return cValue - 32;
}


int main()
{

    char ch = '\0';
    bool cret = '\0';

    printf("Enter the character :  \n");
    scanf("%c", &ch);       //enter the capital only

    cret = ConvertCapital(ch);
    printf("Converted capital latter is : %c\n", cret);

    return 0;
}