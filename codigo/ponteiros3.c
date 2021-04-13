#include <stdio.h>

int main() {
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    printf("%d\n",x);
    x = 4;
    printf("X: %d\n",x);
    (*p)++;
    printf("*p: %d\n",*p);
    --x;
    printf("X: %d\n",x);
    (*p) = *p+x;
    printf("*p: %d\n",*p);

}
