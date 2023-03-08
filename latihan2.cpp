#include <iostream>
using namespace std;

double Luas, P, L;

void input(){
    cout << "Masukan Panjang nya =";
    cin >> P;
    cout << "Masukan Lebar nya =";
    cin >> L;
}

void proses (){
    Luas= P*L;
}

void output (){
cout << "Luasnya =" << Luas;
}

int main(){
    input();
    proses();
    output();
}