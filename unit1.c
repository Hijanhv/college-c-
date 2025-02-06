#include <stdio.h>
void generateFibonacci(int n)
{
    int a = 0, b = 1, nextTerm;

    printf("Fibonacci Series up to %d: ", n);

    while (a <= n)
    {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
}
int main()
{
    int n;

    printf("Enter the upper limit for Fibonacci series: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}
