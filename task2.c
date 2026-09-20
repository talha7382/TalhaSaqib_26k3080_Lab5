#include <stdio.h>

int main()
{
    bool has_cnic = false, pass_test = false;

    printf("do u have cnic? [type \"1\" for yes and \"0\" for no]\n");
    scanf("%d", &has_cnic);

    if (has_cnic)
    {
        printf("have you passed your driving test? [type \"1\" for yes and \"0\" for no]\n");
        scanf("%d", &pass_test);

        if (pass_test)
        {
            printf("License can be issued.");
        }
        else
        {
            printf("cant issue license");
        }
    }
    else
    {
        printf("cant issue license");
    }
}
