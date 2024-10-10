#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("กรุณาเลือกการดำเนินการ (+, -, *, /): ");
    scanf("%c", &operator);

    printf("กรุณาป้อนตัวเลขตัวที่ 1: ");
    scanf("%lf", &num1);
    printf("กรุณาป้อนตัวเลขตัวที่ 2: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("ข้อผิดพลาด: ไม่สามารถหารด้วยศูนย์ได้\n");
                return 1; 
            }
            break;
        default:
            printf("ข้อผิดพลาด: การดำเนินการไม่ถูกต้อง\n");
            return 1;
    }

    printf("ผลลัพธ์: %.2lf\n", result);

    return 0;
}
