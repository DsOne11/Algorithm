#include <stdio.h>
#include <string.h>
#include <ctype.h>

void handshake() {
    int T,n;
    printf("Insert number of cases : ");
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++) 
	{
    	printf("number of people %d: ", i);
    	scanf("%d", &n);
    	int handshakes = (n * (n - 1)) / 2;
    	printf("Case #%d: %d\n", i, handshakes);
    } 
	printf("Program Selesai...\n");
}

int main () {
    handshake();
    getchar();
    return 0;
}
