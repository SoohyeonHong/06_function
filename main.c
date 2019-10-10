#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_star()
{ 	
	//함수 정의 
	
	int i; 
		
	for( i = 0; i < 10; i++ ) 
		printf("*"); 
	
}


int main(int argc, char *argv[]) {
	
	// 함수 호출  
	
	print_star();
	print_star();
	print_star();
	
	
	return 0;
}
