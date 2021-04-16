#include<stdio.h>
#include<stdlib.h>

int main()
{
	int d;
	int x;
	int a;
	float c;
	int op1;
	int op2;
	int t;
	x=10; //constant propagation
	x=x*x; 
	op1 = 4; 
	op2=2*op1; //strength reduction
	float a1;		
	a1="aa"; //type incompatibility
	a=a1-5; //Errors in expressions
	if(c>3){
	a=2+3;
	int z;
	int y;
	z=1;
	if(2>10)
	{
		c=c+2; $$$$ //Panic mode error recovery
	}

	
	}
	else
	{
		//c=c+1;
		a=9*5+4; //constant folding
	}
	
	return 0;
	t=3; //dead code
}

