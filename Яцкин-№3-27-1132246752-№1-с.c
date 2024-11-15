
#include <stdio.h>

int main() {
    int n;
    printf("Введите номер химического элемента\n");
    scanf("%d",&n);
    switch(n){
        case 1:printf("Водород\n");break;
        case 2:printf("Гелий\n");break;
        case 3:printf("Литий\n");break;
        case 4:printf("Бериллий\n");break;
        case 5:printf("Бор\n");break;
        case 6:printf("Углерод\n");break;
        case 7:printf("Азот\n");break;
        case 8:printf("Кислород\n");break;
        case 9:printf("Фтор\n");break;
        case 10:printf("Неон\n");break;
        default:printf("Нету\n");break;
    }
    return 0;
}
