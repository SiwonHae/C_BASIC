#include <stdio.h>

int main(void) {
	char ch;
	
	printf("알파벳 입력: ");
	scanf("%c", &ch);
	printf("아스키 코드 숫자 변환: %d \n", ch);
	
	return 0;
}