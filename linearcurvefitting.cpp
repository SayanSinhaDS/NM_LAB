#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,x[20],y[20],sumx=0,sumy=0,sumxy=0,sumx2=0;
	float a,b;
	printf("\n Linear Curve Fitting By Least Square Method \n");
	printf("\n enter the value of number of terms n: ");
	scanf("%d", &n);
	printf("\n enter the values of x: \n");
	for(i=0;i<=n-1;i++){
		scanf(" %d",&x[i]);
	}
	printf("\n enter the values of y: \n");
	for(i=0;i<=n-1;i++){
		scanf(" %d",&y[i]);
	}
	for(i=0;i<=n-1;i++){
		sumx=sumx +x[i];
		sumx2=sumx2 +x[i]*x[i];
		sumy=sumy +y[i];
		sumxy=sumxy +x[i]*y[i];
	}
	printf("\n sum of all x values: %d",sumx);
	printf("\n sum of all y values: %d",sumy);
	printf("\n sum of all x^2 values: %d",sumx2);
	printf("\n sum of all xy values: %d",sumxy);
	a=((sumx2*sumy -sumx*sumxy)*1.0/(n*sumx2-sumx*sumx)*1.0);
	b=((n*sumxy-sumx*sumy)*1.0/(n*sumx2-sumx*sumx)*1.0);
	printf("\n\n The line is Y=%0.1f+%0.2f X",a,b);
	return 0;
}
