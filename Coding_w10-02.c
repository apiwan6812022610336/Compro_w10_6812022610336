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
printf("%-8s %10s %10s %10s\n", "Student", "Math", "Physics", "Chemistry");

for (i = 0; i < 3; i++) {
    printf("%-8d", i + 1);  // Student เลขที่ชิดซ้าย
    for (j = 0; j < 3; j++) {
        printf("%10.2f", scores[i][j]);  // คะแนนจัดชิดขวาในช่องกว้าง 10
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
