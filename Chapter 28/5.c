#include <stdio.h>

int main(void) {
	
	char ch1, ch2;
	
	FILE * fp1 = fopen("d1.txt", "rt");
	FILE * fp2 = fopen("d2.txt", "rt");
	
	if (fp1 == NULL || fp2 == NULL) {
		printf("파일오픈 실패");
		return -1;
	}
	
	while (1) {
		ch1 = fgetc(fp1);
		ch2 = fgetc(fp2);
		
		if (ch1 != ch2) {
			printf("두 파일은 일치하지 않습니다. \n");
			break;
		}
		
		else if (ch1 == EOF && ch2 == EOF) {
			printf("두 파일은 완전히 일치 합니다. \n");
			break;
		}
	}
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}