#include <iostream>
using namespace std;

int main() {
    char ulangi = 'y';
    int i = 0;

    // Perulangan while
    while(ulangi == 'y'){
        cout<<"Apakah kamu mau mengulangi?\n";
        cout<<"Jawab (y/t) : ";
        cin >> ulangi;

        // increament i
        i++;
    }

    cout<<"Perulangan selesai!\n";
    cout<<"Kamu mengulangi sebanyak "<<i<<" kali \n";
}