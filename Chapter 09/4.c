#include <stdio.h>

int AddToTotal(int num) {
	static int total; // static은 초기화가 단 1번만 이루어짐! 기본 초기화 값은 0이다.
	total += num;
	return total;
}

int main(void) {
	int num;
	
	for (int i = 0; i < 3; i++) {
		printf("입력%d: ", i + 1);
		scanf("%d", &num);
		printf("누적: %d \n", AddToTotal(num));
	}
	
	return 0;
}