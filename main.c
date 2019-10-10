/*
#01


#include <stdio.h>
#include <stdlib.h>


void print_star()
{ 	
	//define function 
	
	int i; 
		
	for( i = 0; i < 10; i++ ) 
		printf("*"); 
	
}


int main(int argc, char *argv[]) {
	
	// using function  
	
	print_star();
	print_star();
	print_star();
	
	
	return 0;
}

*/
// #02&03

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo( int a, int b)
{
	/*
	int output;
	output = a + b;
	return output;
	*/
	
	return a+b;
}

int square(int n)
{
	return n*n;
}

int get_max( int a, int b )
{
	if ( a>b ) 
		return a; // 어차피 a나오면 여기서 끝나게 됨 
	//else 
		return b;
	
}
int main(int argc, char *argv[]) {
	
	int x, y;
	int output;
	int output2;
	
	x = 2;
	y = 5;
	
	output = sumTwo(x,y);
	
	printf("x=2, y=5\n\n");
	printf("sumTwo : %i\n", output);
	printf("square x : %i\n", square(x));	
	printf("square y : %i\n", square(y));
		
	output = get_max(x,y); // renew output result 
	printf("get_max : %i\n", output);
	
	
	
	return 0;
}
