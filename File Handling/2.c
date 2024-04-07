#include <stdio.h>

int main() {
    FILE *output_file;
    int num;

    output_file = fopen("divisible_by_3_and_5.txt", "w");
    if (output_file == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

   
    for (num = 1; num <= 50; num++) {
        if (num % 3 == 0 && num % 5 == 0) {
            fprintf(output_file, "%d\n", num);
        }
    }

    fclose(output_file);

    printf("Numbers divisible by both 3 and 5 between 1 and 50 have been written to divisible_by_3_and_5.txt.\n");

    return 0;
}
