#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks < 0.00) || (fMarks > 100.00))    //filter
    {
        printf("Invalid Input...\n");
    }

    if ((fMarks >= 00.00) && (fMarks < 35.00))
    {
        printf("You Are Fail...\n");
    }

    else if((fMarks >= 35.00) && (fMarks <=50.00))
    {
        printf("Your class is PASS class...\n");
    }

    else if((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your class is SECOND class...\n");
    }

    else if((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your Class is FIRST class...\n");
    }

    else if((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Your class is First class with distinction...\n");
    }
}


int main()
{

    float fvalue = 0.0f;

    printf("Enter your percentage: \n");
    scanf("%f", &fvalue);

    DisplayClass(fvalue);

    return 0;
}