#include <stdio.h>

#define MAX_LEN 50

int main(void) {
	char str[MAX_LEN];
	int len;
	
	printf("영단어 하나를 입력하세요. : ");
	scanf("%s", str);
	
	while (str[len] != '\0') {
		len++;
	}
	
	char tmp;
	for (int i = 0; i < len / 2; i++) {
		tmp = str[i];
		str[i] = str[(len - i) - 1];
		str[(len - i) - 1] = tmp;
	}
	
	printf("입력한 영단어를 역순으로 : %s \n", str);
	
	return 0;
}