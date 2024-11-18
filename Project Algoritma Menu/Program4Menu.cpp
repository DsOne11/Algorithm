#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

// Fungsi untuk menghandle menu 1: Looping number
void LoopingNum() {
    int a, b;
    printf("Insert 2 Number (a, b): ");
    scanf("%d %d", &a, &b);
    int tambah = 1;
    for (int i = 0; i < a; i++)
    {
        printf("%d ", tambah);
        tambah += b;
    }
    getchar();getchar();
    printf("\n\n\n");
    
}

// Fungsi untuk menghandle menu 2: Initial Name
void InitialName() {
        char name[51]; // 50 chars + 1 for null terminator
        getchar();
        printf("Enter your name (5-50 characters): ");
        scanf("%[^\n]", name);
        int length = strlen(name);
        if (length < 5 || length > 50) {
            printf("Nama hanya boleh diantara 5-50 character\n");
        } else {
            srand(time(NULL));
            char randomChar1 = 'A' + (rand() % 26);
            char randomChar2 = 'A' + (rand() % 26);
            printf("Random characters: %c%c", randomChar1, randomChar2);
            printf("%c", toupper(name[0]));
            int flag = 0;
            for (int i = 0; i < length; i++)
            {
                
                if (name[i] == ' ')
                {
                    flag = 1;
                }
                if (flag == 1){
                    printf("%c", toupper(name[i+1]));
                    flag = 0;
                }
                
            }
            
        }

        printf("\n\n\n");
    }

// Fungsi untuk menghandle menu 3: Triangle
void Triangle() {
    getchar();
    int height;
    printf("insert triangle height: "); scanf("%d", &height); printf("\n");
    for (int j = 0; j < height; j++) {
        // Print leading spaces
        for (int k = 0; k < height - j - 1; k++) {
        printf(" ");
        }
        // Print stars
        for (int k = 0; k < 2 * j + 1; k++) {
        printf("*");
        }
        printf("\n");
    }
    getchar();
    printf("\n\n\n");

}

// Fungsi untuk menghandle menu 4: Grade
void grade() {
    getchar();
    int score;
    char result[5];
    do {
        printf("Insert your algo score (0-100): ");
        scanf("%d", &score);
    } while (score < 0 || score > 100);
    if (score >= 90) {
        strcpy(result, "A");
    } else if (score >= 85) {
        strcpy(result, "A-");
    } else if (score >= 80) {
        strcpy(result, "B+");
    } else if (score >= 75) {
        strcpy(result, "B");
    } else if (score >= 70) {
        strcpy(result, "B-");
    } else if (score >= 65) {
        strcpy(result, "C");
    } else if (score >= 50) {
        strcpy(result, "D");
    } else if (score >= 1) {
        strcpy(result, "E");
    } else {
        strcpy(result, "F");
    }
    
    printf("\nYour grade : %s", result); getchar();getchar();
    printf("\n\n");

}

// Fungsi untuk menampilkan menu
void displayMenu() {
    int choice;
    do
    {
        printf("Menu:\n");
        printf("1. Looping Number\n");
        printf("2. Initial Name\n");
        printf("3. Triangle\n");
        printf("4. Grade\n");
        printf("5. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);fflush(stdin);

        switch (choice) {
            case 1:
            printf("You selected Looping Number.\n\n");
            LoopingNum();
            break;
            case 2:
            printf("You selected Initial Name.\n\n");
            InitialName();
            break;
            case 3:
            printf("You selected Triangle.\n\n");
            Triangle();
            break;
            case 4:
            printf("You selected Grade.\n\n");
            grade();
            break;
            case 5:
            printf("Thankyou!\n");
            break;
            default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 5);
}

int main() {
    displayMenu();
    return 0;
}
