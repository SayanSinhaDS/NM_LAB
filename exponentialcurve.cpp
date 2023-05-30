#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	float Y[20],x[20],y[20],sumx=0,sumy=0,sumxy=0,sumx2=0;
	float a,b,A;
	printf("\n Exponential Curve Fitting By Least Square Method \n");
	printf("\n enter the value of number of terms n: ");
	scanf("%d", &n);
	printf("\n enter the values of x: \n");
	for(i=0;i<=n-1;i++){
		scanf(" %f",&x[i]);
	}
	printf("\n enter the values of y: \n");
	for(i=0;i<=n-1;i++){
		scanf(" %f",&y[i]);
	}
	for(i=0;i<=n-1;i++){
		Y[i]=log(y[i]);
	}
	for(i=0;i<=n-1;i++){
		sumx=sumx +x[i];
		sumx2=sumx2 +x[i]*x[i];
		sumy=sumy +Y[i];
		sumxy=sumxy +x[i]*Y[i];
	}
	printf("\n sum of all x values: %f",sumx);
	printf("\n sum of all y values: %f",sumy);
	printf("\n sum of all x^2 values: %f",sumx2);
	printf("\n sum of all xy values: %f",sumxy);
	A=((sumx2*sumy -sumx*sumxy)*1.0/(n*sumx2-sumx*sumx)*1.0);
	b=((n*sumxy-sumx*sumy)*1.0/(n*sumx2-sumx*sumx)*1.0);
	a=exp(A);
	printf("\n\n The line is Y=%0.3fe^%0.3fX",a,b);
	return 0;
}
