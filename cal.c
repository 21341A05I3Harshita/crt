#include<stdio.h>
#include<math.h>
float sum(float x,float y){
	return x+y;
}
float diff(float x,float y){
	return x-y;
}
float mul(float x,float y){
	return x*y;
}
float div(float x,float y){
	return x/y;
}
float power(float x){
	return x*x;
}
int main(){
	float a,b,c;
	int ch;
	do{
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Power\n");
		printf("Enter the choice");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter the value of a");
	            scanf("%f",&a);
	            printf("Enter the value of b");
	            scanf("%f",&b);
				c=sum(a,b);
				printf("Sum is %f\n",c);
				break;
			case 2:
				printf("Enter the value of a");
	            scanf("%f",&a);
	            printf("Enter the value of b");
	            scanf("%f",&b);
				c=diff(a,b);
				printf("Difference is %f\n",c);
				break;
			case 3:
				printf("Enter the value of a");
	            scanf("%f",&a);
	            printf("Enter the value of b");
	            scanf("%f",&b);
				c=mul(a,b);
				printf("Multiplication is %f\n",c);
				break;
			case 4:
				printf("Enter the value of a");
	            scanf("%f",&a);
	            printf("Enter the value of b");
	            scanf("%f",&b);
				c=div(a,b);
				printf("Division is %f\n",c);
				break;
			case 5:
				printf("Enter the value of a");
	            scanf("%f",&a);
	            c=power(a);
	            printf("Power is %f\n",c);
	            break;
	        default:
	        	printf("Invalid Operation");
				
		}
	}while(ch<=5);
	return 0;
}
