#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	int n,i;
	int sum=0;
	
	printf("input a number : ");
	scanf("%i", &n);
	
	for (i=0; i<=n; i++)
		sum+=i;
	
	
	printf("the result is %i", sum);
	
	
	return 0;
}
