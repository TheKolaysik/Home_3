#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main() {
	setlocale(LC_ALL, "RUS");
	int one;
	scanf("%d", &one);
	system("pause");
	printf("%d ������\n", one);
	printf("%f ���������\n", one * 0.453592);
	printf("%.3f �����\n", one * 0.453592 * 1000);
	printf("%f ����\n", one * 0.453592 / 1000);
}