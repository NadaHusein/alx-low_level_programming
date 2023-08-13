#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*Write a program that prints the alphabet in lowercase, followed by a new line. except e and q*/
int main()
{
char a;
        for (a = 'a'; a <= 'z'; a++){
if(a!='e' && a != 'q'){
        putchar(a);
}
}
putchar('\n');
        return (0);
        }
