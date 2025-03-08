//samll of not

#include<stdio.h>
#include<stdbool.h>


bool CheckSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{

    char ch = '\0';
    bool bret = false;

    printf("Enter the character :  \n");
    scanf("%c", &ch);

    bret = CheckSmall(ch);

    if(bret == true)
    {
        printf("its a small letter \n");
    }

    else
    {
        printf("its not a samll latter \n");
    }

    return 0;
}