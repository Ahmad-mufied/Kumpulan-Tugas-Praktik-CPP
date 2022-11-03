#include <iostream>
using namespace std;

int main() {
    int i = 1, a = 0;
    cout<<"i\t\t"<<"a"<<endl;

    while(i <= 10) {
        if ( i % 2 == 0) {
            a = i * 5;
            cout<<i<<"\t\t"<<a<<endl;
        } else {
            a = i + 5;
            cout<<i<<"\t\t"<<a<<endl;
        }
        i++;
    }
}