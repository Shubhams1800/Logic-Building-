#include<stdio.h>

float Average(int no1, int no2, int no3)
{
    float fans = 0.0f;

    fans = ((no1 + no2 + no3)/3);

    return fans;
}

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    int ivalue3 = 0;

    float fret = 0.0f;


    printf("Enter the value of ivalue1: \n");
    scanf("%d", &ivalue1);

    printf("Enter the value of ivalue2: \n");
    scanf("%d", &ivalue2);

    printf("Enter the value of ivalue3: \n");
    scanf("%d", &ivalue3);

    fret = Average(ivalue1, ivalue1, ivalue3);

    printf("Average of 3 numbers is: %f \n", fret);
}