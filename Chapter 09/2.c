#include <stdio.h>

double CelToFah(double cel) {
	double fah;
	
	fah = 1.8 * cel + 32;
	
	return fah;
}

double FahToCel(double fah) {
	double cel;
	
	cel = (fah - 32) / 1.8;
	
	return cel;
}

int main(void) {
	int num;
	
	double cel;
	double fah;
	
	printf("1. 섭씨를 화씨로, 2. 화씨를 섭씨로 : ");
	scanf("%d", &num);
	
	if (num == 1) {
		printf("섭씨 온도를 입력: ");
		scanf("%lf", &cel);
		printf("화씨로는 %f 입니다. \n", CelToFah(cel));
	} else if (num == 2) {
		printf("화씨 온도를 입력: ");
		scanf("%lf", &fah);
		printf("섭씨로는 %f 입니다. \n", FahToCel(fah));
	} else {
		printf("1, 2 중에 선택하세요. \n");
	}

	return 0;
}