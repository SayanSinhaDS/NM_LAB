#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,f[20],freq=0,k,N,cf[20],max=0;
	float x[20],ll[20],ul[20],sum=0.0,sum1=0.0,mean,sd,h,median,mode;
	printf("enter the number of classes: ");
	scanf("%d", &n);
	printf("enter the lower limits of the class-intervals: \n");
	for(i=0;i<n;i++)
	{
		printf("ll[%d]=",i);
		scanf("%f",&ll[i]);
	}
	printf("enter the upper limits of the class-intervals: \n");
	for(i=0;i<n;i++)
	{
		printf("ul[%d]=",i);
		scanf("%f",&ul[i]);
	}
	printf("enter the frequencies of the class-intervals: \n");
	for(i=0;i<n;i++)
	{
		printf("f[%d]=",i);
		scanf("%d",&f[i]);
	}
	for(i=0;i<n;i++)
	{
		x[i]=(ll[i]+ul[i])/2;
		sum+=x[i]*f[i];
		freq+=f[i];
	}
	mean=sum/freq;
	for(i=0;i<n;i++)
	{
		sum1=sum1+(x[i]-mean)*(x[i]-mean)*f[i];
	}
	sd=sqrt(sum1/freq);
	printf("\n mean=%0.3f", mean);
	printf("\n SD=%0.2f", sd);
	h=ul[0]-ll[0];
	cf[0]=f[0];
	for(i=1;i<n;i++){
		cf[i]=cf[i-1]+f[i];
	}
	N=cf[n-1];
	for(i=0;i<n;i++)
	{
		if(cf[i]>=N/2.0)
		{
			break;
		}
	}
	median=ll[i]+((N/2-cf[i-1])*h)/f[i];
	printf("\n the median class is %0.0f-%0.0f",ll[i],ul[i]);
	printf("\n Median=%0.2f",median);
	i=0;
	do
	{
		if(max<f[i])
		{
			max=f[i];
			k=i;
		}
		i=i+1;
	}
	while(i<n);
	printf("\n the max frequency is f[%d]=%d",k,max);
	printf("\n the modal class is %0.0f-%0.0f",ll[k],ul[k]);
	mode=ll[k]+((f[k]-f[k-1])*h/(2*f[k]-f[k-1]+f[k+1]));
	printf("\n Mode=%0.2f",mode);
	return 0;
}
