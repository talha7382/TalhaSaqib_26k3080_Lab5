#include <stdio.h>
int main()
{
    int restaurantOpen, itemAvailable, balanceSufficient;

    printf("Enter 1 for yes and 0 for no for the following questions:\n");
    printf("Is the restraunt open?\n");
    scanf("%d", &restaurantOpen);

    if (restaurantOpen)
    {
        printf("Is the Item available?\n");
        scanf("%d", &itemAvailable);

        if (itemAvailable)
        {
            printf("Is the balance sufficient?\n");
            scanf("%d", &balanceSufficient);

            if (balanceSufficient)
            {
                printf("Your order has been initiated.\n");
                return 0;
            }
        }
    }

    printf("Unfortunately, your order cannot be initiated.");
    return 0;

}
