#include <stdio.h>
int fibonnaci(int);

int main(int argc, char **argv){
	int i = 0;

	for(i = 0; i <= 30;i++){
		printf("\nthe value of fibonnaci(%d) is %d",i,fibonnaci(i));
	}
}

int fibonnaci(int a){
//	printf("\n	called fib(%d)",a);
	if(a <= 1){
		return a;
	}
	return fibonnaci(a -1) + fibonnaci(a - 2);
}
