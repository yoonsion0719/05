#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input_;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%i", &input_);
	
	if (input_>0)
	{
		printf("����Դϴ�.");
	}
	else if (input_<0)
	{
		printf("�����Դϴ�.");
	}
	else
	{
		printf("0 �Դϴ�.");
	}
	
	return 0;
}
