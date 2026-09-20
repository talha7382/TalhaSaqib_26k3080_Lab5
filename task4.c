#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (marks >= 50)
    {
    case 1:
        printf("Pass");
        break;

    case 0:
        printf("Fail");
        break;
    }

return 0;
}
