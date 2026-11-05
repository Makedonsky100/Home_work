#include <stdio.h>
int main(void)
{
	char c;
	int a, b;
	float result;
	
	scanf(" %d", &a);
	scanf(" %c", &c);
	scanf(" %d", &b);
	
	switch(c){
	case '+':
		printf("%.2f\n", result = a + b);
		break;
	case '-':
		printf("%.2f\n", result = a - b);
		break;
	case '*': case 'x':
		printf("%.2f\n", result = a * b);
		break;
	case '/': case ':':
		if(b != 0){
			printf("%.2f\n", result = (float)a / b);}
		else
			printf("ERROR!\n");
		break;
	case '^':
		result = 1;
		for (int i = 1; i <= b; i = i + 1){
			
			
			result = result * a;
			
		}
		printf("%.2f", result);
		break;
	default:
		printf("ERROR!\n");
		break;
	}
	
	return 0;
}
