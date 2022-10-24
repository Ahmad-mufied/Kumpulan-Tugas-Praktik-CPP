#include <iostream>
using namespace std;

int luas(int a,int b) {
    return a * b;
}

int keliling(int a, int b) {
    return 2 * (a+b);

}

int main() {

    int panjang, lebar;

    cout << "============================================" << endl;
    cout << "Aplikasi Menghitung Luas dan Persegi Panjang" << endl;
    cout << "============================================" << endl;

    cout << "Panjangnya Berapa nih ? "; cin >> panjang;
    cout << "Lebarnya Berapa nih ? "; cin >> lebar;

    cout << "Luasnya adalah\t\t : " << luas(panjang, lebar) << endl;
    cout << "Kelilingmya adalah\t : " << keliling(panjang, lebar) << endl;
}