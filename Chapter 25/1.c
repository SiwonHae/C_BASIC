#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int max_len;
	int len;
	
	printf("입력할 문자열의 최대 길이를 입력하세요. : ");
	scanf("%d", &max_len);
	getchar(); // \n 삭제
	char * arr = (char *)malloc(sizeof(char) * (max_len + 1));
	
	printf("문자열 입력 : ");
	fgets(arr, max_len + 1, stdin);
	arr[strlen(arr) - 1] = 0; // \n 삭제
	len = strlen(arr);
	
	for (int i = len; i > 0; i--) {
		if (arr[i] == ' ') {
			printf("%s ", &arr[i + 1]);
			arr[i] = 0;
		}
	}
	printf("%s", &arr[0]);
	printf("\n");
	
	free(arr);
	
	return 0;
}