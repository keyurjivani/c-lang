#include <stdio.h>

int main() {
    FILE *even_file, *odd_file;
    int num;

    even_file = fopen("even_file.txt", "w");
    if (even_file == NULL) {
        printf("Unable to open even_file.txt for writing.\n");
        return 1;
    }

    odd_file = fopen("odd_file.txt", "w");
    if (odd_file == NULL) {
        printf("Unable to open odd_file.txt for writing.\n");
        return 1;
    }

    for (num = 50; num <= 70; num++) {
        if (num % 2 == 0) {
            fprintf(even_file, "%d, ", num);
        } else {
            fprintf(odd_file, "%d, ", num);
        }
    }

    printf("Even numbers from even_file.txt: ");
    for (num = 50; num <= 70; num += 2) {
        printf("%d, ", num);
    }
    printf("\n");

    printf("Odd numbers from odd_file.txt: ");
    for (num = 51; num <= 69; num += 2) {
        printf("%d, ", num);
    }
    printf("\n");

    fclose(even_file);
    fclose(odd_file);

}
