#include <stdio.h>

int main() {

    int i = 1;

    while (i<=10) {

        printf("5 x %d\n",5*i);
        i = i + 1;
    }

    //ALTERNATIVA: UTILIZANDO O DO-WHILE

    do {
        printf("5 x %d\n",5*i);
        i = i + 1;

    } while (i<=10);

    //ALTERNATIVA: FOR
    for (i=1; i<=10;i++) {
        printf("5 x %d\n",5*i);
    }

    return 0;
}
