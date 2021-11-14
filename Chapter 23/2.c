#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct rectangle {
	Point p1; // 좌 하단
	Point p2; // 우 상단
} Rectangle;

void showArea(Rectangle r) {
	printf("넓이 : %d \n", (r.p1.xpos - r.p2.xpos) * (r.p1.ypos - r.p2.ypos));
}

void showPos(Rectangle r) {
	printf("좌 상단 : %d %d \n", r.p1.xpos, r.p2.ypos);
	printf("좌 하단 : %d %d \n", r.p1.xpos, r.p1.ypos);
	printf("우 상단 : %d %d \n", r.p2.xpos, r.p2.ypos);
	printf("우 하단 : %d %d \n", r.p2.xpos, r.p1.ypos);
}

int main(void) {
	Rectangle r1;
	
	printf("직사각형의 좌 하단점과 우 상단점을 입력하세요. (ex : 1 1 4 4) : ");
	scanf("%d %d %d %d", &r1.p1.xpos, &r1.p1.ypos, &r1.p2.xpos, &r1.p2.ypos);
	
	showArea(r1);
	showPos(r1);
	
	return 0;
}