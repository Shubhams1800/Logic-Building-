//strings with gets

#include<stdio.h>

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    gets(Arr);

    printf("Entered string is : %s \n", Arr);
    
    
    return 0;
}

/*Enter the string : 
shubham shinde
Entered string is : shubham shinde 
*/