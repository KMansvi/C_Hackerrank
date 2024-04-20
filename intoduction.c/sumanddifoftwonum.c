#include <stdio.h>
int main() {
    int int1, int2;
    float float1, float2;
    scanf("%d", &int1);
    scanf("%d", &int2);
    scanf("%f", &float1);
    scanf("%f", &float2);
    printf("%d", int1 + int2);
    printf(" %d\n", int1 - int2);
    printf("%.1f", float1 + float2);
    printf(" %.1f\n", float1 - float2);
    return 0;
}
