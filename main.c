#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	int answer=59;
	int n;
	int trial=0;
	
	
	do
	{
		//답을 입력받는다
		printf("Guess a number :");
		scanf("%i", &n); 
		
		//정답과 큰지/작은지 여부를 판단하고 메세지 출력
		if (n>answer)
		 printf("high!\n");
		else if (n<answer)
		 printf("low!\n"); 
		 
		trial+=1;
		
	}
		
	while (n!=answer); //정답과 동일하면 루프에서 빠져나옴 
	
	printf("Congratulation! trials: %i", trial);

	
	
	return 0;
}
