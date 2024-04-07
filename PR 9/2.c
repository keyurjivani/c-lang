#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

void main() {
    struct Student students[5];
	int i;
    for ( i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i+1);
        printf("Roll no => ");
        scanf("%d", &students[i].roll_no);
        printf("Name => ");
        scanf("%s", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
    }

    for ( i = 0; i < 5; i++) {
        printf("\n%s (%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry => %d\n", students[i].chem_marks);
        printf("Mathematics => %d\n", students[i].maths_marks);
        printf("Physics => %d\n", students[i].phy_marks);
        int total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        printf("Total => %d/300\n", total_marks);
        float percent = (float)total_marks / 300 * 100;
        printf("Percent => %.2f%%\n", percent);
    }
}
