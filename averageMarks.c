#include <stdio.h>

//recursion 
int calculateTotalMarks(int marks[7], int index) {
    if (index == 0) {
        return marks[0];
    } else {
        return marks[index] + calculateTotalMarks(marks, index - 1);
    }
}

float calculateAverageMarks(int marks[], int size) {
    int totalMarks = calculateTotalMarks(marks, size - 1);
    float averageMarks = (float) totalMarks / size;
    return averageMarks;
}

int main() {
    int marks[8]; // Array to store the marks of 8 subjects
    int i;
    
    printf("Enter the marks of the student in 8 subjects:\n");
    for (i = 0; i < 8; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    int totalMarks = calculateTotalMarks(marks, 6);
    float averageMarks = calculateAverageMarks(marks, 8);
    
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
    
    // Grading
    char grade;
    if ((averageMarks >= 70) && (averageMarks <= 100)){
        grade = 'A';
    } else if (averageMarks >= 60) {
        grade = 'B';
    } else if (averageMarks >= 50) {
        grade = 'C';
    } else if (averageMarks >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    printf("Grade: %c\n", grade);
    
    return 0;
}
