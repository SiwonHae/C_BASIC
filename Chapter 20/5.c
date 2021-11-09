#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockPaperScissors(int user, int com) {
	int result = 0;
	
	switch (user) {
		case 1:
			if (com == 2) {
				result = 1;
			} else if (com == 3) {
				result = 2;
			} else {
				result = 3;
			}
			break;
		case 2:
			if (com == 3) {
				result = 1;
			} else if (com == 1) {
				result = 2;
			} else {
				result = 3;
			}
			break;
		case 3:
			if (com == 1) {
				result = 1;
			} else if (com == 2) {
				result = 2;
			} else {
				result = 3;
			}
			break;
	}
	
	return result;
}

int main(void) {
	
	srand((int)time(NULL));
	
	int com;
	int user;
	int win = 0, draw = 0;
	char * name[3] = {"바위", "가위", "보"};
	
	while (1) {
		com = rand() % 3 + 1;
		
		printf("바위는 1, 가위는 2, 보는 3 : ");
		scanf("%d", &user);
		
		if (rockPaperScissors(user, com) == 1) {
			win++;
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다! \n", name[user - 1], name[com - 1]);
		} else if (rockPaperScissors(user, com) == 2) {
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다! \n", name[user - 1], name[com - 1]);
			printf("\n게임의 결과 : %d승 %d무 \n", win, draw);
			break;
		} else {
			draw++;
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다! \n", name[user - 1], name[com - 1]);
		}
	}
	
	return 0;
}