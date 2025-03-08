#include<stdio.h>

int Maximum(int ino1, int ino2)
{

    if(ino1 > ino2)
    {
        return ino1;
    }

    else 
    {
        return ino2;
    }

}

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    int iret = 0;

    printf("Enter the value of ivalue1: \n");
    scanf("%d", &ivalue1);

    printf("Enter the value of ivalue2: \n");
    scanf("%d", &ivalue2);

    iret = Maximum(ivalue1, ivalue2);

    printf("Largest number is: %d \n", iret);

    return 0;
}