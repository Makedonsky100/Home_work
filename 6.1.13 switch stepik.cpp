#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);
	int chislo;
	scanf("%d", &chislo);
	int a, b, c, d;
	
	int res = 0;
	
	switch(N){
	case 1:
		
		res = chislo;
		break;
	case 2:
		a = chislo / 10;
		b = chislo % 10;
		res = a * b;
		break;
	case 3:
		a = chislo / 100;
		b = chislo % 100 / 10;
		c = chislo % 100 % 10;
		res = a * b * c;
		break;
	case 4:
		a = chislo / 1000;
		b = chislo % 1000 / 100;
		c = chislo % 1000 % 100 / 10;
		d = chislo % 1000 % 100 % 10;
		res = a * b * c * d;
		break;
	default:
		printf("ERROR!");
	}
	
	printf("%d", res);
	return 0;
}

