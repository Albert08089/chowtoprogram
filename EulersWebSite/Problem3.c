#include <stdio.h>

int main()
{
    long long n;

    printf("Enter a number to get the longest prime factor:");
    scanf("%I64d", &n);

    for (long long i = 2; i < n; ++i)
    {
        while (n % i == 0)
        { //for yes
            n = n / i;
        }
    }

    printf("%d", n);
}