#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	double x, s, t;
	int f;
	printf("Введите x:");
	scanf("%lf", &x);
	s = x;
	t = x;
	for (int i = 3; i <= 13; i += 2)
	{
		t = -t * x * x * 1 / ((i - 1) * i);
		s += t;

	}
	
	printf("Ответ: %.6lf", s);


}