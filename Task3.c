#include <stdio.h>

int main()
{
    int appointment, doctorAvailable, registrationCompleted;
    printf("Enter 1 for yes and 0 for no for the following questions:\n");
    printf("Do you have an appointment?\n");
    scanf("%d", &appointment);
    if (appointment)
    {
        printf("Is a doctor available?\n");
        scanf("%d", &doctorAvailable);
        if (doctorAvailable)
        {
            printf("Is your registration completed?\n");
            scanf("%d", &registrationCompleted);
            if (registrationCompleted)
                {
                    printf("You can meet the doctor");
                    return 0;
                }
        }
    }
    
    printf("Unfortunately you cannot meet the doctor");
    return 0;
}
