#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input_;
	
	printf("���� �ϳ��� �Է��Ͻÿ� : ");
	scanf("%d", &input_);
	
	if (input_>=0)
	{
		printf("���밪�� %d �Դϴ�.\n", input_);
	 } 
	
	else
	{
		printf("���밪�� %d �Դϴ�.\n", -input_);
	}
	
	system("PAUSE");
	return 0;
}
