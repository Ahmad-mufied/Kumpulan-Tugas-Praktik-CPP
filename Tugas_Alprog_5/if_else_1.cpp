#include <iostream>
using namespace std;

int main() {

    // Declaring a variable
    string password;

    cout << "========= Login Wifi =========" << endl;

    // Input Password
    cout << "Masukan Password: ";
    cin >> password;

    // Check password using if else statement
    // Jika password benar maka outputnya adalah "Selamat login wifi berhasil !"
    // Jika password benar maka outputnya adalah "Password salah, coba lagi!"

    if (password == "wifiamikomlelet") {
        cout << "Selamat login wifi berhasil !" << endl;
    } else {
        cout << "Password salah, coba lagi!" << endl;
    }
}