#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	int x;

	printf("input number : ");
	scanf("%d", &number);

	printf("1 is'n prime\n");
	if (number > 1) {

		for (int n = 2; n <= number; n++) {
			x = 0;
			for (int i = 2; i <= n; i++) {
				//printf("%d ,%d = %d\n", n,i,n%i);

				if (n % i == 0 && i != n) {
					x = 1;
				}
			}

			if (x == 1) {
				printf("%d is'n prime\n", n);
			}
			else {
				printf("%d is prime\n", n);
			}

		}
	}
	else {
		//printf("%d is'n prime\n", number);
	}
	return 0;
}