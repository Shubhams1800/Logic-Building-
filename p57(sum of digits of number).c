#include<stdio.h>

int sumDigits(int ino)
{

    int isum = 0;
    int idigit = 0;

    while (ino != 0)
    {

        idigit = ino % 10;
        isum = isum + idigit;
        ino = ino / 10;

    }
    
    return isum;


}


int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("Enter number: \n");
    scanf("%d", &ivalue);
    iret = sumDigits(ivalue);

    printf("Sum of digits are : %d \n", iret);

    return 0;
}