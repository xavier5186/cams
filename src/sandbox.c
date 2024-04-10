#include "sandbox.h"

/* example function */
int func1(int x)
{
	if(x == 1)
		x = x + 1;	

	return x;
}  

int func2(int y)
{
	if(y != 0)
		y = y + 2;
	else
		y = y;	
	
	return y;
}