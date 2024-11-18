#include <stdio.h>
#include <string.h>
#include <ctype.h>

void RihaRina() {
    int T, n;
    printf("Insert number of cases : ");
    scanf("%d", &T); // Read the number of test cases
    getchar();
    for (int i = 1; i <= T; i++) 
	{
        char name1[5];
        char name2[5];
        char result [10];
        do {
        	printf("name 1: ");
        	scanf("%s", name1); // Read the names 1
        	printf("name 2: ");
        	scanf("%s", name2); // Read the names 2
            if (strlen(name1) != 4 || strlen(name2) != 4) {
                printf("name must be exactly 4 characters long. Please try again.\n");
            } else {
                int valid = 1;
                for (int k = 0; k < 4; k++) {
                    if (!isupper(name1[k]) || !isupper(name2[k])) {
                        valid = 0;
                        break;
                    }
                }
                if (!valid) {
                    printf("name must contain only capital letters. Please try again.\n");
                } else {
                    break;
                }
            }
        } while (1);
        printf("Case #%d: ", i);
        printf("%c%c%c%c %c%c%c%c\n\n", 
		name1[0], name1[1], name2[0], name2[1], 
		name1[2], name1[3], name2[2], name2[3]);
    }
    printf("Program Selesai...\n");
}

int main () {
    RihaRina();
    getchar();
    return 0;
}
