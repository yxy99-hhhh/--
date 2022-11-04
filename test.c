#include <stdio.h>

void print_table(int n) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {




			printf("%2d*%-2d=%-4d", i, j, i * j);
		}

		printf("\n");

	}


}





/*/int main() {

	int n = 0;
	scanf_s("%d",&n);
	print_table(n);












	return 0;
}*/