#include <stdio.h>

int main(void) {
	
	int aNum = 0, pNum = 0;
	char str[100];
	
	FILE * fp = fopen("text.txt", "rt");
	
	if (fp == NULL) {
		printf("파일오픈 실패");
		return -1;
	}
	
	while (1) {
		fscanf(fp, "%s", str);
		
		if (feof(fp) != 0) {
			break;
		}
		
		if (str[0] == 'A') {
			aNum++;
		}
		
		if (str[0] == 'P') {
			pNum++;
		}
	}
	
	printf("A로 시작하는 단어의 수: %d \n", aNum);
	printf("P로 시작하는 단어의 수: %d \n", pNum);
	
	fclose(fp);
	
	return 0;
}