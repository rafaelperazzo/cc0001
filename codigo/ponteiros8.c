#include <stdio.h>

void func(int *px, int *py)
{
 px = py;
 *py = (*py) * (*px);
 *px = *px + 2;
}

int main() {
    int x=3, y=4;
    func(&x,&y);
    printf("x = %d, y = %d", x, y);
    return 0;
}
