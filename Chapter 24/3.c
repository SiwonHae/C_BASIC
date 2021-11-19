#include <stdio.h>

int main(void) {
	char str[256];
	
	FILE * fp = fopen("mystory.txt", "rt");
	
	if (fp == NULL) {
		printf("파일오픈 실패");
		return -1;
	}
	
	while (fgets(str, sizeof(str), fp) != NULL) {
		printf("%s", str);
	}
	
	fclose(fp);
	
	return 0;
}