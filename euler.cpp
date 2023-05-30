#include<stdio.h>
float f(float x,float y){
	return (y-x)/(x+y);
} 
int main(){
	float i,x0,y0,xn,h=0.02,n,slope,yn;
	printf("\n enter the initial value of x: ");
	scanf("%f",&x0);
	printf("\n enter the initial value of y: ");
	scanf("%f",&y0);
	printf("\n enter the final value of x: ");
	scanf("%f",&xn);
	n=(xn-x0)/h;
	printf("\nx0\ty0\tslope\tyn\n");
	printf("--------------------------\n");
	for(i=0;i<n;i++)
	{
		slope=f(x0,y0);
		yn=y0+h*slope;
		printf("%0.4f\t%0.4f\t%0.4f\t%0.4f\n",x0,y0,slope,yn);
		y0=yn;
		x0=x0+h;
	}
	printf("\n the value of y at x=%0.1f is %0.3f",xn,y0);
	return 0;
}
