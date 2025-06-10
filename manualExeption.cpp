#include <iostream>
using namespace std;

int main ()
{
    try {
        cout << "S elamat belajar di prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah integer maka
        cout << "Pernyataan tidak dieksekusi" << endl;
    }
    catch  (int a){
        // blok ini akan dieksekusi
        cout << "pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*jika selain integer maka block ini akan dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}