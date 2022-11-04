#include<stdio.h>
int main() {
	int i = 0;
	
	for (i = 100; i < 1000; i++) {
		int g = 0, s = 0, b = 0;
		g = (i % 10);
		s = ((i / 10) % 10);
		b = ((i / 100 )% 10);
		g = g * g * g;
		s = s * s * s;
		b = b * b * b;
		if ((g + s + b) == i)
			printf("%d\t",i);





		
	}














	return 0;
}