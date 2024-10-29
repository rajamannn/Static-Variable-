//program to print static variable using funcions
#include<stdio.h>
#include<conio.h>
 int fun()
{
    static int a = 10;
    a++;
    return a;
}

int main()
{
    printf("%d ", fun());
    printf("%d ", fun());
    return 0;
}
