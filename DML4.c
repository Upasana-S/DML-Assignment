#include<stdio.h>
#define grid 20


void main()
{long long int f=1; int i; 
  for(i=0; i< grid; i++)
	{f*=(2*grid)-i;
	 f/=i+1;	} 
  printf("There are %lld routes", f);
}
