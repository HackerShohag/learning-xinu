/* xsh_exit.c - xshexit */
#include <xinu.h>
#include <stdio.h>

shellcmd xsh_greet(int32 nargs, char *args[])
{
    if (nargs > 1)
    {
        printf("Hello");

        for (int32 i = 1; i < nargs; i++)
        {
            if (i == nargs - 1 && nargs > 2)
            {
                printf(" and %s", args[i]);
            }
            else
            {
                printf(" %s", args[i]);
                if (i < nargs - 2 && nargs > 2)
                {
                    printf(",");
                }
            }
        }

        printf(". Welcome to Xinu!\n");
    }

    return 0;
}