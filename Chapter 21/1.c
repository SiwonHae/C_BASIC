#include <stdio.h>

int main(void) {
	int ch;
	
	printf("알파벳 문자를 하나 입력하세요 : ");
	ch = getchar();
	
	if (ch >= 'a' && ch <= 'z') {
		ch -= 'a' - 'A';
	} else if (ch >= 'A' && ch <= 'Z') {
		ch += 'a' - 'A';
	} else {
		printf("알파벳 이외의 문자를 입력했습니다. \n");
		return -1;
	}
	
	putchar(ch);
	
	return 0;
}