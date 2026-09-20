#include <stdio.h>

int main()
{
    int age, marks;

    printf("enter your age:\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("enter your marks:\n");
        scanf("%d", &marks);
        
        if (marks >= 50)
        {
            printf("Eligible for Admission");
        }
        else
        {
            printf("you are ineligible");
        }   
    }
    else
    {
        printf("you are ineligible");
    }

}
