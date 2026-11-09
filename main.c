#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    double result = 1.0 / (x + 100);
    printf("%.15f\n", result);

    return 0;
}