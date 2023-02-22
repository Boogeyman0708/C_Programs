
//****BISECTION METHOD in C****//
            //******100% working******//
//**best is take a solved problem to check this**//
#include<stdio.h>
#include<math.h>

float f(float x)
{
	return(pow(x,3)+3*x-5);  /*given problem, change as ur desire or according to given problem*/
}
main()
{
	float a1,b1,a2,b2,a,b,x,y,z,error;
	int i;
	/*find those 2 point which satisfies f(a)f(b)<0 i.e a and b has different signs(i.e Descartes rule of sign*/
	/*best process than trail and error*/
	a1=0.0;
	b1=1.0;
	a2=0.0;
	b2=-1.0;
	while(f(a1)*f(b1)>=0 && f(a2)*f(b2)>=0)
	{
		a1=b1;
		b1=b1+1.0;       //u can use 0.1 for more accuracy
		a2=b2;
		b2=b2-1.0;       //u can use 0.1 for more accuracy
	}
	if(f(a1)*f(b1)<0)     //if points are +ve
	{
		a=a1;
		b=b1;
	}
	else if(f(a2)*f(b2)<0)  //if points are -ve
	{
		a=a2;
		b=b2;
	}
	printf("\t\troot lies between %.0f and %.0f .\n",a,b);
	/*Iteration of Bisection Method starts here*/
	if(f(a)>0)
	{
		z=a;
		a=b;
		b=z;
	}
	printf("\t\tEnter error(i.e decimal places)::");   //allowed error in value of x
	scanf("%f",&error);
	y=(a+b)/2;
	do{
		if(f(y)<0)
		   a=y;
	    else
	       b=y;
	    x=y;
	    y=(a+b)/2;    
	/*if value of x at nth iteration & (n-1)th iteration is same at given decimal places*/    
	}while(fabs(y-x)>error); 
	printf("\t\troot= %f",y);
	return 0;
}