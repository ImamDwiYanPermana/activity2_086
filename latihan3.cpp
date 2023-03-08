#include <iostream>
using namespace std;
double P, L;

void input(){
    cout << "masukan panjang nya =";
    cin >> P;
    cout << "masukan lebar nya =";
    cin >> L;
}
double prosses(){
    return P*L;
}

double prosses2 (double a, double b){
    return a*b;
}

void output(){
    cout << "Luasnya =" <<prosses();
    cout << "n/ Luasnya ke 2 =" <<prosses2 (P,L);
}

int main(){
    input();
    output();
}