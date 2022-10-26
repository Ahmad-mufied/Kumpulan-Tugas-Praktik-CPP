#include <iostream>
using namespace std;

int main() {
    // Declaring a variable
    string nim, password;

    cout << "========= Login Dashboard Mahasiswa =========" << endl;

    // input nim
    cout << "Masukan nim: ";
    cin >> nim;

    // input password
    cout << "Masukan password: ";
    cin >> password;

    // Check password using if else statement
    // Jika nim dan password yang dimasukan benar maka ouputnya adalah "Selamat Login Dashboard Mahasiswa Berhasil !"
    // Jika salah maka outputnya adalah "Kombinasi nim dan password salah, coba lagi!"
    
   if ((nim == "22.11.5219") && (password == "wifiamikomlelet")) {
       cout << "Selamat Login Dashboard Mahasiswa Berhasil !" << endl;
   } else {
       cout << "Kombinasi nim dan password salah, coba lagi!" << endl;
   }
}