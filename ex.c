#include<stdio.h>
#include<string.h>

int main() {
    int i, j;
    float scores[3][3];  // [นักเรียน][วิชา]  3 คน × 3 วิชา
    float sum[3] = {0};  // เก็บผลรวมของแต่ละวิชา
    char *subjects[3] = {"Math", "Physics", "Chemistry"};

    // รับค่าคะแนน
    for (i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%s: ", subjects[j]);
            scanf("%f", &scores[i][j]);
            sum[j]  = sum[j] + scores[i][j];  // สะสมผลรวมต่อวิชา
        }
    }

    // แสดงผลคะแนนทั้งหมด
    printf("\nScore Table:\n");
    printf("Student      Math     Physics   Chemistry\n");
    for (i = 0; i < 3; i++) {
        printf("%d", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%8.2f",scores[i][j]);
        }
        printf("\n");
    }

    // แสดงค่าเฉลี่ยต่อวิชา
    printf("\nAverage per subject:\n");
    for (j = 0; j < 3; j++) {
        printf("%s: %.2f\n", subjects[j], sum[j] / 3.0);
    }

    return 0;
}
