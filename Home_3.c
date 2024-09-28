#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main() {
	setlocale(LC_ALL, "RUS");
	int one;
	scanf("%d", &one);
	system("pause");
	printf("%d фунтов\n", one);
	printf("%f килограмм\n", one * 0.453592);
	printf("%.3f грамм\n", one * 0.453592 * 1000);
	printf("%f тонн\n", one * 0.453592 / 1000);
}