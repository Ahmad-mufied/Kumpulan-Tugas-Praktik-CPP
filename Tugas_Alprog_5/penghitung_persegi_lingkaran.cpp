#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    float panjang, lebar, jari;
    string pilihan;
    const float phi = 3.14;
    menu:
    cout<< "==============="<<endl;
    cout<<"1.Menghitung Luas dan Keliling Persegi Panjang"<<endl;
    cout<<"2.Menghitung Luas dan Keliling Lingkaran"<<endl;
    cout<<"3.Exit/Keluar"<<endl;
    cout<<"=============="<<endl;
    cout<<"Masukan Angka Pilihan Anda = ";
    cin>>pilihan;
    system("clear");

    if (pilihan == "1") {
        cout<<"Masukan Niali Panjang \t\t= ";
        cin>>panjang;
        cout<<"Masukan Niali Lebar \t\t= ";
        cin>>lebar;
        cout<<"Luas Persegi Panjang \t\t= "<< panjang*lebar<<endl;
        cout<<"Keliling Persegi Panjang \t= "<< 2*(panjang+lebar)<<endl;
        goto menu;
    } else if (pilihan == "2") {
        cout<<"Masukan Nilai Jari-jari \t";
        cin>>jari;
        cout<<"Luas Lingkaran \t\t\t= "<< phi*jari*jari<<endl;
        cout<<"Keliling Lingkaran \t\t= "<< 2*phi*jari<<endl;
        goto menu;
    } else if (pilihan == "3") {
        cin.ignore();
    } else {
        cin.ignore();
        cout<<"Pilihan salah, tekan enter untuk melanjutkan";
        cin.get();
        system("clear");
        goto menu;
    }
}