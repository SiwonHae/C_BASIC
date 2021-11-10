#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numberBaseball(int user[], int com[], int result[], int size) {
	int strikeCount = 0;
	int ballCount = 0;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (user[i] == com[j]) {
				if (i == j) {
					strikeCount++;
				} else {
					ballCount++;
				}
			}
		}
	}
	
	result[0] = strikeCount;
	result[1] = ballCount;
	
	if (strikeCount == 3) {
		result[2] = 1;
	}
	
	return 0;
	
}

int main(void) {
	
	srand((int)time(NULL));
	
	printf("Start Game! \n");
	
	int com[3];
	for (int i = 0; i < 3; i++) {
		com[i] = rand() % 10;
	}
	printf("Com : ");
	for (int i = 0; i < 3; i++) {
		printf("%d ", com[i]);
	}
	printf("\n\n");
	
	int user[3];
	int result[3] = {}; // result[0] = Strike Count, result[1] = Ball Count, result[2] = End
	int count = 1;
    printf("Start Game! 반드시 0 ~ 9 사이의 숫자를 입력! (예외 처리 하지 않음) \n");
	while (result[2] == 0) {
		printf("3개의 숫자 선택: ");
		scanf("%d %d %d", &user[0], &user[1], &user[2]);
		count++;
		
		numberBaseball(user, com, result, 3);
		printf("%d번째 도전 결과: %dStrike, %dBall \n", count, result[0], result[1]);
		result[0] = 0, result[1] = 0;
	}
	
	printf("\nGame Over! \n");
	
	return 0;
}