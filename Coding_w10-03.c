#include <stdio.h>
#include <string.h>

int main() {
    char name1[100], name2[100];  // เก็บชื่อ
    int len1, len2;

    // รับค่าชื่อลูกค้า
    printf("Enter name of customer 1: ");
    scanf("%s", name1);
    printf("Enter name of customer 2: ");
    scanf("%s", name2);

    // หา length ของชื่อ
    len1 = strlen(name1);
    len2 = strlen(name2);

    // ตรวจสอบกรณีชื่อเหมือนกัน
    if(strcmp(name1, name2) == 0) {
        printf("Both of your names are the same, which is %s.\n", name1);
        printf("The length of the name is %d characters.\n", len1);
    } else {
        // กรณีชื่อไม่เหมือนกัน
        printf("Customer 1: %s (%d characters)\n", name1, len1);
        printf("Customer 2: %s (%d characters)\n", name2, len2);
    }

    return 0;
}