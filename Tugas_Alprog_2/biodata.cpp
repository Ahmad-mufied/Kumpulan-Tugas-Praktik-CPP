#include <iostream>
using namespace std;

int main() {
    string name, jurusan;
    int age;
    char jenis_kelamin;

    cout << "-----------" << endl
         << "- Biodata -" << endl
         << "-----------" << endl;

    cout << "Siapakah namamu\t\t: ";
    getline(cin, name);

    cout << "Berapa Umurmu\t\t: ";
    cin >> age;

    cout << "Jurusan\t\t\t: ";
    cin.ignore();
    getline(cin, jurusan);
   
    cout << "Jenis kelamin [L/P]\t: "; 
    cin >> jenis_kelamin;

    cout << "Salam kenal, " << name << " anda berasal dari jurusan "<< jurusan 
         << " sekarang anda berusia " << age << " dan anda berjenis kelamin " 
         << jenis_kelamin << endl;
}