#include <stdio.h>

int main()
{
    int balance;
    printf("enter remaining balance\n");
    scanf("%d", &balance);

    if (balance < 500)
    {
        printf("Low balance");
    }
    else if ((balance >= 500) && (balance <= 2000))
    {
        printf("Sufficient Balance");
    }
    else 
    {
        printf("Premium Balance");
    }

    return 0;
}
