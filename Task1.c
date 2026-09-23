#include <stdio.h>
int main()
{
    int ctemp;
    printf("please enter temperature in celsius\n");
    scanf("%d", &ctemp);

    if (ctemp < 15)
    {
        printf("\nCold");
    }
    else if ((ctemp >= 15) && (ctemp <= 30))
    {
        printf("\nNormal");
    }
    else
    {
        printf("Hot");
    }

    return 0;
}
