#include <iostream>
using namespace std;

int main() {
    // Declaring a variable
    string password;

    cout << "========= Login Wifi =========" << endl;
    // Input Password
    cout << "Masukan Password: ";
    cin >> password;

    // Check password using if statement
    // Jika password benar maka ouputnya adalah "Selamat login wifi berhasil !"
    if (password == "amikom") {
        cout << "Selamat login wifi berhasil !" << endl;
    }
}