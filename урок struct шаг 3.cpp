//задание: чему равно b.k?

#include <stdio.h>

struct B {
	int k;
	float z;
};

int main(){
	struct B b = {7, -1.24};
	
	b.k = b.k + 2;
	printf("%d", b.k);
	return 0;
}

// ответ: b.k == 9;
