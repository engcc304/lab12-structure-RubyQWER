#include <stdio.h>
#include <string.h>

struct Student {
    char Name[30];
    char ID[14];
    float Scores[5];
} typedef S;

// Function to calculate grade
const char* calculateGrade(float score) {
    if (score >= 85) return "A+";
    else if (score >= 80) return " A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return " B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return " C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return " D";
    else return " F";
}

int main() {
    S students[3];

    printf("Enter the details of 3 students:\n");

    for (int i = 0; i < 1 ; i++) {
        printf("Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s %s", students[i].Name,students[i].Name);

        printf("ID: ");
        scanf("%s", students[i].ID);

        for (int j = 0; j < 5; j++) {
            printf("Scores in Subject %d: ", j + 1);
            scanf("%f", &students[i].Scores[j]);
        }
    }

    printf("\nStudent Details:\n");

    for (int i = 0; i < 1 ; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].Name);
        printf("ID: %s\n", students[i].ID);
        printf("Scores: ");

        for (int j = 0; j < 5; j++) {
            printf("%.0f ", students[i].Scores[j]);
        }
        printf("\n");

        printf("Grades: ");
        for (int j = 0; j < 5; j++) {
            printf("%s ", calculateGrade(students[i].Scores[j]));
        }
        printf("\n");

        float sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += students[i].Scores[j];
        }
        float averageScore = sum / 5.0;
        printf("Average Scores: %.1f\n\n", averageScore);
    }

    return 0;
}