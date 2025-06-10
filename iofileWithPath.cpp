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
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();
    // membuka file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file
    infile.open(NamaFile, ios::in);
    cout << endl << ">= Membuka dan membaca file " << endl;
    // jika fil ada maka 
    if (infile.is_open())
    {
        // melakukan perulangan setiap bari
        while (getline (infile, baris))
        {
            // dan tappilkan di sisi
            cout << baris << '\n';
        }
        //tutp file tersebut setelah selesai
        infile.close();
    }
    //jika tidak ditemukan file maka akan menapilkan ini
    else cout << "unable to open file";
    return 0;
}