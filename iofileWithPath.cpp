#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string NamaFile;
    cout << "Masukkan nama file : ";
    cin >> NamaFile;
    // membuka file dala mode menulis.
    ofstream outfile;
    // menunjukan ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= Menulis file \'q\' untuk keluar" << endl;
    // unlimited loop untuk menulis
    while (true) {
        cout << "-";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika ada memasukkan karakter q
        if (baris == "q") break;
        // menulis memasukkkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
   
}