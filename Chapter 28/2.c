#include <stdio.h>

typedef struct book {
	char author[20];
	char title[50];
	int page;
} Book;

int main(void) {
	
	Book * info[3];
	
	printf("도서 정보 입력 \n");
	for (int i = 0; i < 3; i++) {
		info[i] = (Book *)malloc(sizeof(Book))
		printf("저자 : ");
		fgets(info[i]->author, sizeof(info[i]->author), stdin);
		printf("제목 : ");
		fgets(info[i]->title, sizeof(info[i]->title), stdin);
		printf("페이지 수 : ");
		scanf("%d", &info[i]->page);
		getchar();
	}
	printf("\n\n");
	
	printf("도서 정보 출력 \n");
	for (int i = 0; i < 3; i++) {
		printf("book %d \n", i + 1);
		printf("저자 : ");
		fputs(info[i]->author, stdout);
		printf("제목 : ");
		fputs(info[i]->title, stdout);
		printf("페이지 수 : %d \n", info[i]->page);
	}
	
	return 0;
}