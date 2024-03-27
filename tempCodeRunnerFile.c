#include <stdio.h>
int main() {
    int a, b, c, d, e, f;
    printf("월급 :");
    scanf("%d", &a);
    printf("하루 교통비, 식비, 용돈 :");
    scanf("%d %d %d", &b, &c, &d);
    printf("일수 :");
    scanf("%d", &e);
     f = e - (a + b + c) * d;

    printf("\n %d", &f);
}