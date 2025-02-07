/* xsh_exit.c - xshexit */
#include <xinu.h>
#include <stdio.h>

void prod2(sid32, sid32), cons2(sid32, sid32);

int32 n = 0;

shellcmd xsh_hello(int32 nargs, char *args[])
{
    printf("Hello, World!\n");

    pid32 pid = getpid();
    kprintf("The process id of %s is %d\n", args[0], pid);

    sid32 produced, consumed;

    consumed = semcreate(0);
    produced = semcreate(1);

    resume(create(cons2, 1024, 20, "cons", 2, consumed, produced));
    resume(create(prod2, 1024, 20, "prod", 2, consumed, produced));

    return 0;
}

void prod2(sid32 consumed, sid32 produced)
{
    int32 i;

    for ( i = 0; i < 10; i++)
    {
        wait(consumed);
        n++;
        signal(produced);
    }   
}

void cons2(sid32 consumed, sid32 produced)
{
    int32 i;

    for (i = 0; i < 10; i++)
    {
        wait(produced);
        printf("n is %d\n", n);
        signal(consumed);
    }
    
}