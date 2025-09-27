#include<stdio.h>
#include<string.h>

#include <stdio.h>

int main() {
    int num_students;
    int i;
    float score, sum = 0, average;

    
    printf("Enter number of students: ");
    scanf("%d", &num_students);

    
    printf("Enter %d student scores (one per line):\n", num_students);
    for (i = 0; i < num_students; i++) {
        printf("Score %d: ", i + 1);
        scanf("%f", &score);
        sum = sum + score;
    }

    
    average = sum / num_students;

    
    printf("\nNumber of students = %d\n", num_students);
    printf("Average score = %.2f\n", average);

    return 0;
}
