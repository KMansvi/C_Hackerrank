#include <stdio.h>
#include<math.h>
#include<stdlib.h>

void update(int *a,int *b) {
    int *sum = (int *)malloc(sizeof(int));
    int *dif = (int *)malloc(sizeof(int));
    *sum = *a + *b;
    *dif = abs(*a - *b);
    *a = *sum;
    *b = *dif;;
    free(sum);
    free(dif);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
