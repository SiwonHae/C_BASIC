#include <stdio.h>

int main(void) {
	int score[5][5] = {};
	
	printf("철희, 철수, 영희, 영수의 점수를 입력합니다. \n");
	printf("국어, 영어 수학, 국사 점수를 차례대로 4개 입력하시면 됩니다. \n");
	
	int studentTotal = 0;
	for (int i = 0; i < 4; i++) {
		studentTotal = 0;
		printf("%d번째 학생 성적 입력: ", i + 1);
		for (int j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			studentTotal += score[i][j];
			score[i][4] = studentTotal;
		}
	}
	
	int subjectTotal = 0;
	for (int i = 0; i < 4; i++) {
		subjectTotal = 0;
		for (int j = 0; j < 4; j++) {
			subjectTotal += score[j][i];
		}
		score[4][i] = subjectTotal;
		score[4][4] += subjectTotal;
	}
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}