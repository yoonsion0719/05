#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	int answer=59;
	int n;
	int trial=0;
	
	
	do
	{
		//���� �Է¹޴´�
		printf("Guess a number :");
		scanf("%i", &n); 
		
		//����� ū��/������ ���θ� �Ǵ��ϰ� �޼��� ���
		if (n>answer)
		 printf("high!\n");
		else if (n<answer)
		 printf("low!\n"); 
		 
		trial+=1;
		
	}
		
	while (n!=answer); //����� �����ϸ� �������� �������� 
	
	printf("Congratulation! trials: %i", trial);

	
	
	return 0;
}
