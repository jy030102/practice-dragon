#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tries = 0;
	int guess = 0;
	int answer = rand()%10000;

	do
	{
		printf("숫자 입력: ");
		scanf_s("%d", &guess);
		tries = tries + 1;
		if (guess < answer)
			printf("숫자가 낮음\n");
		if (guess > answer)
			printf("숫자가 높음\n");
	} while (guess != answer);
		printf("축하합니다\n");
		printf("시도횟수는 %d입니다", tries);
	return 0;
}