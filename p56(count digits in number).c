#include<stdio.h>

int countdigits(int ino)
{

    int icnt = 0;

    while (ino != 0)
    {
        ino = ino / 10;
        icnt++;
    }
    
    return icnt;


}


int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("Enter number: \n");
    scanf("%d", &ivalue);
    iret = countdigits(ivalue);

    printf("Number of digits are : %d \n", iret);

    return 0;
}