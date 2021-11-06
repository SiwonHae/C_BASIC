#include <stdio.h>

int main(void) {
	
	int second = 0;
	int h = 0, m = 0, s = 0;
	
	printf("초(second) 입력: ");
	scanf("%d", &second);
	
	h = second / 3600;
	second %= 3600;
	m = second / 60;
	second %= 60;
	s = second;
	
	printf("[h: %d, m: %d, s: %d] \n", h, m, s);
	
	return 0;
}