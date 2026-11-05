#include <stdio.h>
int main(void)
{
	int sum = 0;
	int total = 366;
	int month, day;
	scanf("%d %d", &month, &day);
	
	switch(month){
	case 12:
		sum = sum + 30; //прибавляем прошедший ноябрь
	case 11:
		sum = sum + 31; //прибавляем прошедший октябрь
	case 10:
		sum = sum + 30; //прибавляем прошедший сентябрь
	case 9:
		sum = sum + 31; //прибавляем прошедший август
	case 8:
		sum = sum + 31; //прибавляем прошедший июль
	case 7:
		sum = sum + 30; //прибавляем прошедший июнь
	case 6:
		sum = sum + 31; //прибавляем прошедший май
	case 5:
		sum = sum + 30; //прибавляем прошедший апрель
	case 4:
		sum = sum + 31; //прибавляем прошедший март
	case 3:
		sum = sum + 28; //прибавляем прошедший февраль
	case 2:
		sum = sum + 31; //прибавляем прошедший январь
	case 1:
		sum = sum + day; //прибавляем день к прошедшим дням месяцев
		break;
	default:
		printf("ERROR!");
		break;
	}
	printf("%d", sum);
	
	return 0;
}
