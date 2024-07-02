#include<stdio.h>
int xor(int n)
{
	int a;
	if(n%4==1)
	   a=1;
	  else if(n%4==2)
	  	a=n+1;
	  else if(n%4==3)
	    a=0;
	  else 
	    a=n;
	return a;
}
main(){
	  int l,r,a,b;
	  printf("Enter the l value: "); // Time complexity is O(1)
	  scanf("%d",&l);
	  printf("Enter the r value: "); // Time complexity is O(1)
	  scanf("%d",&r);
	  a=xor(l-1);
	  b=xor(r);
	  printf("%d",a^b);
}
