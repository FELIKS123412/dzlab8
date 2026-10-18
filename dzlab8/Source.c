#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	double x, s;
	int f;
	printf("Введите x:");
	scanf("%lf", &x);
	s = x;
	for (int i = 3; i <= 13; i += 2)
	{
		f = 1;
		for (int j = 1; j <= i; j++)
		{
			f *= j;
		}
		s += pow(-1, (i - 1) / 2) * pow(x, i) / f;
	}
	
	printf("Ответ: %.6lf", s);


}