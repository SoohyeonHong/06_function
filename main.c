#include <stdio.h>
#include <stdlib.h>

// #01

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


int sumTwo( int a, int b)
{
	
	//int output;
	//output = a + b;
	//return output;
	
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
	printf("\n\n");
	
	
	
*/



// #04

/
int square(int n);


int main(int argc, char *argv[]) {
	
	int result;
	result = square(5);
	printf("%d", result);
	
}

int square(int n)
{
	return (n*n);
}

*/

// #05

int compute_sum(int n) 
{ 
	int i; 
	int result = 0; 
		for ( i=1; i<=n; i++) 
		result += i; 
	return result; 
} 

int main(void) 
{ 
	int sum; 
	sum = compute_sum(100); 
	printf(“sum = %d\n”, sum); 
	
	return 0;
}

// #06

int main(void) 
{ 
	int i; 
	int max=45; 
	
	srand( (unsigned) time(NULL) ); 
		for ( i=0; i<6; i++ ) 
		printf(“%d ”, 1+rand()%max; 
	return 0;

}

// #07
int CalCombination(int n, int r)// n,r
{
	int mo, ja;
	mo = factorial(n-r)*factorial(r);
	ja = factorial(n);  //함수 있다 가정하고 nfactorial 값 넣는 것
	
	return (ja/mo);
}

int factorial (int n)
{
	int res = 1;
	int i;
	for(i=1; i<=n; i++)
	{
		res = res * i	;
	}
	return res;
}

int main(void)
{
	int n;
	int r;
	int result;
	
	printf("input n and r : ");
	scanf("%d %d", &n, &r);

	result = CalCombination(n,r);
	printf("Result of combination is %d\n", result);

	
	return 0;
}

