#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Введите три дри длинных трех отрезков"<<endl;
    cout<<"Введите длину отрезка 1"<<endl;
    cin>>a;
    cout<<"Введите длину отрезка 2"<<endl;
    cin>>b;
    cout<<"Введите длину отрезка 3"<<endl;
    cin>>c;
    if ((a<b+c)&&(b<a+c)&&(c<a+b)){
        cout<<"Треугольник существует"<<endl;
    }
    else{
        cout<<"треугольник не существует"<<endl;
    }
    
    
}
