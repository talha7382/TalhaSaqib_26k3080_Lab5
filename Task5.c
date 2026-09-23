
#include <stdio.h>

int main()
{
    int selection1, selection2, pin, new_pin;
    printf("\nThis ATM provides four operations: 1 for Balance Inquiry,"
        "2 for Cash Withdrawal, 3 for Cash Deposit, and 4 for PIN Change.\n");
    scanf("%d", &selection1);
    switch (selection1)
    {
        case 1:
            printf("Enter your PIN\n");
            scanf("%d", &pin);

            switch (pin);
                {
                    case 1456:
                        printf("your balance is $1000.\n");
                        break;
                }
            break;
        case 2:
        case 3:
            printf("Choose 1 for Savings Account or 2 for Current Account:\n");
            scanf("%d", &selection2);

            switch (selection1)
            {    
                case 2:
                    switch (selection2)
                    {
                        case 1:
                            printf("You have withdrawn $1000 from your savings account.\n");
                            break;
                        case 2:
                            printf("You have withdrawn $1000 from your current account.\n");
                    }
                    break;
                case 3:
                    switch (selection2)
                    {
                        case 1:
                            printf("You have deposited $1000 from your savings account.\n");
                            break;
                        case 2:
                            printf("You have deposited $1000 from your current account.\n");
                            break;
                    }
                    break;
            }
            break;
        case 4:
            printf("Enter new PIN\n");
            scanf("%d", &new_pin);
            printf("\nNew PIN has been set as %d.\n", new_pin);
        default:
            printf("Incorrect operation.\n");
            break;
    }
}








