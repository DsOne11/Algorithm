#include <stdio.h>
#include <string.h>
#include <ctype.h>

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void AnB() {
    int T;
    printf("Insert number of cases : ");
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++) 
	{ 
		int A,B;
        printf("Insert 2 number (A, B) : ");
        scanf("%d %d", &A, &B);

        int sum_A = sum_of_digits(A);
        int sum_B = sum_of_digits(B);
        int result = sum_A * sum_B;

        printf("Case #%d: %d\n", i, result);
    }
        printf("Program Selesai...");
    	printf("\n\n\n");
}

int main () {
    AnB();
    getchar();
    return 0;
}
