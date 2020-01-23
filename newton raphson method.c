#include<stdio.h>
#include<math.h>
#include<conio.h>
int itr=0;
float f(float x)
{
	return (x*x-4*x+1);
}
float f1(float y)
{
	return (2*y-4);
}
float newton(float *p)
{
	float x1;
	x1=(*p)-(f(*p)/f1(*p));
	itr++;
	printf("\n\tAfter %d itration approximation is %f ",itr,x1);
	return x1;
}

main()
{
	float alerr,x0,x1;
	int maxitr;
	printf("\t\aEnter approximate value of function ,Allowed error ,Maximum itration :\n");
	scanf("%f %f %d",&x0,&alerr,&maxitr);
	do{
		x1=newton(&x0);
		if(f(x1)==0)
		{
			printf("\nAfter %d itration root is %f",itr,x1);
			return 0;
		}
    if(fabs(x1-x0)<alerr)
   {
	 printf("\t\nAfter %d itration root is %f",itr,x1);
    return 0;
}
x0=x1;
}while(itr<maxitr);
getch();
}
