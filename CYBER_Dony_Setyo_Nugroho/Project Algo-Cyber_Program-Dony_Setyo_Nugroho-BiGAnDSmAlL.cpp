#include <stdio.h>
#include <string.h>
#include <ctype.h>

void bns() {
    int T;
    printf("Insert number of cases : ");
    scanf("%d", &T);
    getchar();
    
    for (int i = 1; i <= T; i++) 
	{
        char input[50];
        printf("name %d: ", i);
        scanf("%s", input);
        for (int j = 0; j < strlen(input); j++) {
            if (j % 2 == 0) {
            printf("%c", toupper(input[j]));
            } else {
            printf("%c", tolower(input[j]));
            }
        } printf("\n\n");
        
    }
    printf("Program Selesai...\n");
    
}

int main () {
    bns();
    getchar();
    return 0;
}
