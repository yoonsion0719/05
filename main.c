#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input_;
	
	printf("정수 하나를 입력하시오 : ");
	scanf("%d", &input_);
	
	if (input_>=0)
	{
		printf("절대값은 %d 입니다.\n", input_);
	 } 
	
	else
	{
		printf("절대값은 %d 입니다.\n", -input_);
	}
	
	system("PAUSE");
	return 0;
}
