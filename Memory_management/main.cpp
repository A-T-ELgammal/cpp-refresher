#include <stdio.h>

void myFunc()
{
    int k = 5;
    printf("K: %p \n", &k);
}
int main()
{

    int i = 3;
    int x = 4;
    printf("i: %p \n", &i);
    printf("x: %p \n", &x);
    int j = 4;
    printf("j: %p \n", &j);
    myFunc();
    return 0;
}
