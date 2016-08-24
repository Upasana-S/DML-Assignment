#include<stdio.h>
/*The fibonacci series goes: 1,1,2,3,5,8..
  using the fact that the sum of two odd numbers is always odd and the sum of an even number is always even, it follows that every third term of the series is even.

this program loops until the nth fibonacci number that is less than 4,000,000. and sums all the even terms
*/
# define LIM 4000000
void main()
{ long int evSum=0;
  long int f1=1,f2=1; int count=2;
  while(f2<LIM)
  { 
   if(count%3==0)
    {evSum+=f2;
     printf("\n %ld \n ",evSum);}
   f2=f2+f1; 
   f1=f2-f1;
   count++;
   }
  
 printf(" The sum of even valued terms of the Fibonacci series 	until %d is %ld \n",LIM, evSum);	
}
