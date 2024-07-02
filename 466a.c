#include<stdio.h>
main()
{
   int n,m,a,b,res,x;
   scanf("%d %d %d %d",&n,&m,&a,&b);
   if(a>(b/m))
   {
   	  x=n%m;
   	  res= b*(n/m);
   	  if(x!=0)
   	  {
   	  	if(b<(x*a))
    	  	{
   	  		res=res+b;
 	  		printf("%d",res);
    	}
    	else
	   {
			res=res+(x*a);
			printf("%d",res);
	   } 
   	  	
      }
      else
	  {
        printf("%d",res);	
	  }
   	 
   }
   else
   {
   	 res=a*n;
   	 printf("%d",res);
   }
   
}
