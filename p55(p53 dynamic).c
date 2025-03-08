#include<stdio.h>

void display(int ino)
{
    int idigit = 0;

    while (ino != 0)
    {
        idigit = ino % 10;
        printf("digit is : %d \n",idigit);
        ino = ino / 10;
        printf("Number is : %d \n",ino);
    }
    


}


int main()
{
    int ivalue = 0;

    printf("Enter number: \n");
    scanf("%d", &ivalue);

    display(ivalue);


    return 0;
}