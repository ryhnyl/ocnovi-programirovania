#include <iostream>

using namespace std;

int main(){
    cout << "Введите порядковый номер месяца"<<endl;
    int n;
    cin>> n;
    if (n==1){
        cout<<"Январь"<<endl;
    }
    else if (n==2){
        cout<<"Февраль"<<endl;
    }
    else if (n==3){
        cout<<"Март"<<endl;
    }
    else if (n==4){
        cout<<"Апрель"<<endl;
    }
    else if (n==5){
        cout<<"Май"<<endl;
    }
    else if (n==6){
        cout<<"Июнь"<<endl;
    }
    else if (n==7){
        cout<<"Июль"<<endl;
    }
    else if (n==8){
        cout<<"Август"<<endl;
    }
    else if (n==9){
        cout<<"Сентябрь"<<endl;
    }
    else if (n==10){
        cout<<"Октябрь"<<endl;
    }
    else if (n==11){
        cout<<"Ноябрь"<<endl;
    }
    else if (n==12){
        cout<<"Декабрь"<<endl;
    }
    else {
        cout <<"Такого месяца не существует"<<endl;
    }
}
