#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input_;
	
	printf("정수를 입력하시오 : ");
	scanf("%i", &input_);
	
	if (input_>0)
	{
		printf("양수입니다.");
	}
	else if (input_<0)
	{
		printf("음수입니다.");
	}
	else
	{
		printf("0 입니다.");
	}
	
	return 0;
}
