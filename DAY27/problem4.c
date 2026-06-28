#include <stdio.h>

struct Marksheet {
    int roll_no;
    char name[50];
    int math,science,english;
    int total;
    float percentage;
};

int main() {
    struct Marksheet m;

    printf("--- Marksheet Generation System ---\n");
    printf("Enter Student Roll Number: ");
    scanf("%d",&m.roll_no);
    printf("Enter Student Name: ");
    scanf(" %[^\n]s",m.name);

    printf("Enter Marks for Math (out of 100): ");
    scanf("%d", &m.math);
    printf("Enter Marks for Science (out of 100): ");
    scanf("%d", &m.science);
    printf("Enter Marks for English (out of 100): ");
    scanf("%d", &m.english);

    // Calculations
    m.total = m.math + m.science + m.english;
    m.percentage = (float)m.total / 3.0;

    // Output formatting
    printf("\n============================================\n");
    printf("             OFFICIAL MARKSHEET             \n");
    printf("============================================\n");
    printf("Roll No: %-10d Student Name: %s\n", m.roll_no, m.name);
    printf("--------------------------------------------\n");
    printf("SUBJECT          MAX MARKS      MARKS OBTAINED\n");
    printf("--------------------------------------------\n");
    printf("Mathematics      100            %d\n", m.math);
    printf("Science          100            %d\n", m.science);
    printf("English          100            %d\n", m.english);
    printf("--------------------------------------------\n");
    printf("TOTAL MARKS: 300                OBTAINED: %d\n", m.total);
    printf("PERCENTAGE:                     %.2f%%\n", m.percentage);
    printf("RESULT:                         %s\n", (m.percentage >= 40.0) ? "PASSED" : "FAILED");
    printf("============================================\n");

    return 0;
}