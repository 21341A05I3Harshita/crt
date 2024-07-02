#include <stdio.h>

char determineGrade(int score) {
    switch (score / 10) {
        case 10: 
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default:
            return 'F';
    }
}

int main() {
    int score;
    char grade;

    
    printf("Enter the student's score (0-100): ");
    scanf("%d",&score);

   
    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
        return 1;
    }

    
    grade = determineGrade(score);

   
    printf("The student's grade is: %c\n", grade);

    return 0;
}
