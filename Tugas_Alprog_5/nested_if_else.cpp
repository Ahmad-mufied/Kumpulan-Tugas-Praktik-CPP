#include <iostream>
using namespace std;

int main() {
     // Declaring a variable
    string username, password;

    cout << "\n======== Welcome =======" << endl << endl;
    // Input username
    cout << "Masukan Username \t: ";
    cin >> username;

    // nested if else
    // Cek apakah username sama dengan admin. Jika benar maka lanjut input password
    // Jika tidak sama maka outputnya adalah "=> Username tidak terdaftar"

    if (username == "admin") {

        // Input Password
        cout << "Password \t\t: ";
        cin.ignore();
        getline(cin,password);

        // Cek apakah password sama dengan "admin"
        // Jika benar maka outputnya adalah "=> Yeay !!! kamu berhasil login"
        // Jika salah maka outputnya adalah "=> Kamu salah masukin password, cobo lagi lah"

        if (password == "admin") {
            cout << "\n=> Yeay !!! kamu berhasil login" << endl;
        } else {
            cout << "\n=> Kamu salah masukin password, cobo lagi lah" << endl;
        }

    } else {
        cout << "\n=> Username tidak terdaftar" << endl;
    }
}