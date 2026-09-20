#include <stdio.h>

int main()
{
    int dept, section;

    printf("\nSelect a department: Type 1 for Computer Science, 2 for Information Technology, 3 for Artificial Intelligence.\n");
    scanf("%d", &dept);

    printf("\nSelect the section: 1 for Section A, 2 for Section B.\n");
    scanf("%d", &section);

    switch (dept)
    {
        case 1:
            printf("\nYou've chosen CS\n");

            switch (section)
            {
                case 1:
                    printf("You've chosen Section A");
                    break;
                case 2:
                    printf("You've chosen Section B");
                    break;
                default:
                    printf("Invalid");
            }
            break;
        case 2:
            printf("\nYou've chosen IT\n");
        
            switch (section)
            {
                case 1:
                    printf("You've chosen Section A");
                    break;
                case 2:
                    printf("You've chosen Section B");
                    break;
                default:
                    printf("Invalid");
            }
            break;
        case 3:
            printf("\nYou've chosen AI\n");
            
            switch (section)
            {
                case 1:
                    printf("You've chosen Section A");
                    break;
                case 2:
                    printf("You've chosen Section B");
                    break;
                default:
                    printf("Invalid");
            }
            break;
        default:
            printf("Invalid");
    }
}
