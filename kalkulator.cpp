#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
	int input1, input2,x;
	char op;
	//ask for the user input
	printf("Please input your Case [number (math operator) number]: ");
	scanf("%d %c %d", &input1,&op,&input2);
	
	
	
	switch (op){
	case '+' : 
	x = input1 + input2;
	break;
	case'-' :
	x = input1 - input2;
	break;
	case '*':
	x = input1 * input2;
	break;
	case '/':
	x = input1 / input2;
	break;
}
	
	printf ("%d", x);
	return 0;
	
}
