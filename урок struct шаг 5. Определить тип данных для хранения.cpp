#include <stdio.h>
#include <locale.h>



struct Rect0 {
	int x;
	int y;
	int width;
	int height;
};

int main(){
	
	setlocale (LC_ALL, "");
	
	struct Rect0 a;
	scanf("%d%d%d%d", &a.x, &a.y, &a.width, &a.height);
	printf("абсцисса точки: %d\n"
		   "ордината точки: %d\n"
		   "ширина прямоугольника: %d\n" 
		   "высота прямоугольника: %d\n",
		   a.x, a.y, a.width, a.height);
	return 0;
}


