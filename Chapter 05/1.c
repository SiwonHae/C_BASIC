#include <stdio.h>

int main(void) {
	int x1, y1, x2, y2;
	
	printf("단, 좌 상단의 x, y 좌표 값이 우 하단의 x, y 좌표 값보다 작다고 가정한다. \n");
	printf("좌 상단의 x, y 좌표: ");
	scanf("%d %d", &x1, &y1);
	printf("우 상단의 x, y 좌표: ");
	scanf("%d %d", &x2, &y2);
	
	printf("두 점이 이루는 직사각형의 넓이: %d \n", (x2 - x1) * (y2 - y1));
	
	
	return 0;
}