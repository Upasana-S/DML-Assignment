#include<stdio.h>
/*pythogorean triplets can be expressed as a^2+b^2=c^2, each of which can be obtained as
a=(m^2-n^2)^2, b=2mn and c= (m^2 + n^2)^2 

This program finds the pythogoream triplet such that a+b+c=1000 and prints their product

*/
void main()
{
int a=0, b=0,c=0; int m=2,n;
while(m<=20)
 { for(n=1; n<m;n++)
     {a=m*m-n*n; b=2*m*n;  c= m*m + n*n;
	printf(" %d  %d \n",m ,n);
	if((a+b+c)==1000)
	{printf("The pythogorean triple is (%d,%d,%d) and their product is %d",a,b,c, (a*b*c)); break; }
    printf("The pythogorean triple is (%d,%d,%d) sum %d \n ",b,a,c,(a+b+c));
     }
    
m++;
  }
}
