//capital or not

#include<stdio.h>
#include<stdbool.h>


bool CheckCapital(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        return true;
    }
    else
    {
        return false
;
    }
}


int main()
{

    char ch = '\0';
    bool bret = false;

    printf("Enter the character :  \n");
    scanf("%c", &ch);

    bret = CheckCapital(ch);

    if(bret == true)
    {
        printf("its a capital letter \n");
    }

    else
    {
        printf("its not a capital latter \n");
    }

    return 0;
}