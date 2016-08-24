#include<stdio.h>
#include<math.h>

/* This program finds all the prime factors of a number nd prints the largest one.
   The loop starts from 3 as the given number is odd.
   There are modifications to reduce the number of iterations significantly.
*/

void main()
{long long int i=3,n=600851475143;  long long int f[10]; int c=0;
for (i = 3; i <= sqrtl(n); i = i+2)
    {
        while (n%i == 0)
        {   f[c]=i;
            n = n/i;
        }
    }
printf("The largest prime factor of the number is %lld \n",f[c-1]);
}


