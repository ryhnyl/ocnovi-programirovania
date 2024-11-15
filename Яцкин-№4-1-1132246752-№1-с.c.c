
#include <stdio.h>

int main() {
    printf("Сумма чисел от 1 до 100\n");
    int s=0;
    for(int i=1;i<100;i++){
        s=s+i;
    }
    printf("%d\n",s);
    return 0;
}
