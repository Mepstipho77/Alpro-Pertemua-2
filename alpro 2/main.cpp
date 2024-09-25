#include <iostream>

using namespace std;

int main(){
    string nama, nim;
    int usia;
    int i = 1;

    cout<<"Masukan Nama Anda: ";
    cin>>nama;
    cout<<"Masukan NIM Anda: ";
    cin>>nim;
    cout<<"Masukan Usia Anda: ";
    cin>>usia;

    cout<<"Nama Anda: "<<nama<<endl;
    cout<<"NIM Anda: "<<nim<<endl;
    cout<<"Usia Anda: "<<usia<<endl;
    do {
        cout <<i<<". "<<nama<<endl;
        i++;
    }
    while (i <= usia);

    return 0;
}
