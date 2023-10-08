#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int num=0;
		
	
	printf("input a string : ");
	scanf("%s", &c);
	
	
	
	while ( (c= getchar() ) != '\n')
	{
		if (c>='0' & c<='9')
			num=num+1;
	}
	
	printf("num of digits is %i\n", num);
	

	system("PAUSE");
	return 0;
}
