#include <stdio.h>
int main(void)
{
	char gender;
	int age, height, weight;
	double bmr_male, bmr_female;
	
	
	scanf("%c", &gender); // считываем пол
	
	scanf("%d", &age);
	scanf("%d", &height); // считываем  значение в переменную height
	scanf("%d", &weight); // считываем значение в переменную weight
	
	switch (gender){
	case 'm':
		bmr_male = 10*weight + 6.25*height - 5*age + 5;
		printf("|  BMR  |\n");
		printf("|%4.2f|\n", bmr_male);
		break;
	case 'f':
		bmr_female = 10*weight + 6.25*height - 5*age - 161;
		printf("|  BMR  |\n");
		printf("|%4.2f|\n", bmr_female);
		break;
	default:
		printf("ERROR!");
		
	}
	return 0;
}
