#include<stdio.h>

struct student {
    char name[30];
    int marks;
    int rollno;
};

int main() {
    struct student s[20], t;
    int n, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
        printf("Enter roll no: ");
        scanf("%d", &s[i].rollno);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[i].marks > s[j].marks) {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }

    printf("Name \t Marks \t Roll No. \n");
    for (i = 0; i < n; i++) {
        printf("%s \t %d \t %d \n", s[i].name, s[i].marks, s[i].rollno);
    }

    return 0;
}