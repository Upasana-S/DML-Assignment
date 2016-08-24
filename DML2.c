#include<stdio.h>

/*This program find the difference between the square of the sum and the sum of the squares of the first n (in this case 100) natural numbers */
# define n 100
void main()
{
 long int sumSQ=0,sqSum=0;
 int i=0;
 int sum= (n*(n+1))/2; //directly from the from the formula for the sum of the first n natural numbers
 sqSum= sum*sum;
 for(i=1; i<=100; i++)
   {sumSQ+= (i*i);
   }
 printf("The difference between the square of the sum and the sum of the squares is %ld ", (sqSum-sumSQ));
}
