#include<stdio.h>
#include<math.h>
int itr=0;
float f(float x)
{
	return (x*x-4*x+1);
}
float bisect(float a,float b)
{
	float mid;
	itr++;
	mid=(a+b)/2;
	printf("\t\n%d  iteration mid is %f",itr,mid);
	return (mid);
}
main()
{
	int maxitr;
	float a,b,mid,x,alerr;
do{
	printf("\nenter a and b , allowed error,maximum iteration\n");
	scanf("%f %f %f %d",&a,&b,&alerr,&maxitr);
	do{
		mid=bisect(a,b);
		if(f(mid)==0)
		{
			printf("\nafter %d iteration",itr);
			printf("\troot is %f",mid);
			return 0;
		}
	if(f(mid)<0)
	{
		if(f(mid)*f(a)<0)
		b=mid;
		else
		a=mid;
	}
	else 
	{if(f(mid)*f(a)<0)
	b=mid;
	else
	a=mid;
	}
	x=bisect(a,b);
	if(fabs(x-mid)<alerr)
	{
		printf("\n\tAfter %d iteration root is %f",itr,x);
		return 0;
	}
	}while(itr<maxitr);
}while(1); 
}

