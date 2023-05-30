//dy/dx=y-x/x+y taking y=1 at x=0 find y at x=0.1 , step length(h)=0.02, correct upto 3 dec places
#include<stdio.h>
#define f(x,y)((y-x)/(x+y))
int main(){
	float x0,y0,xn,k1,k2,k3,k4,k,yn,h=0.02;
	int i,n;
	printf("\n enter the initial value of x: ");
	scanf("%f",&x0);
	printf("\n enter the initial value of y: ");
	scanf("%f",&y0);
	printf("\n enter the final value of x: ");
	scanf("%f",&xn);
	
	n=(xn-x0)/h;
	printf("\nx0\ty0\tyn\n");
	printf("--------------------------\n");
	for(i=0;i<n;i++){
		k1=h*f(x0,y0);
		k2=h*f(x0+h/2.0,y0+k1/2.0);
		k3=h*f(x0+h/2.0,y0+k2/2.0);
		k4=h*f(x0+h,y0+k3);
		k=(k1+2*k2+2*k3+k4)/6.0;
		yn=y0+k;
		printf("%0.4f\t%0.4f\t%0.4f\n",x0,y0,yn);
		x0=x0+h;
		y0=yn;
	}
	printf("\n the value of y at x=%0.1f is %0.3f",xn,yn);
	return 0;
}
