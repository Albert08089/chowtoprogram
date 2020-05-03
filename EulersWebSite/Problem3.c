#include <stdio.h>
#include <stdbool.h>

int main()
{
    long long n=600851475143L;

    for(long long i=2;i<n ;++i)
    {
        while(n % i==0)
        {//for yes
            n=n/i;

        }   

    }
    
    printf("%d", n);
}