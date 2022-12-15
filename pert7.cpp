#include <iostream>
using namespace std;

int main() {
    int jam;
    string nip, nama;
    float pokok, lembur, makan, trans;

    cout << "Masukan nomor NIP          : ";
    cin >> nip;
    cout << "Masukan Nama               : ";
    cin >> nama;
    cout << "Masukan Jumlah jam kerja   : ";
    cin >> jam;

    if (jam <=8) {
        pokok = jam*7500;
    } else {
        pokok = 87500;
    }

    if (jam > 8) {
        lembur = 1.5*pokok;
    } else {
        lembur = 0;
    }

    if (jam > 9) {
        makan = 10000;
    } else {
        makan = 0;
    }

    if (jam > 10) {
        trans = 13000;
    } else {
        trans = 0;
    }
    cout << "\n";
    cout << "Perolehan Total gaji yang diterima :" << endl;
    cout << "=====================================" << endl;
    cout << "NIP        : " << nip << endl;
    cout << "Nama       : " << nama << endl;
    cout << "-------------------------------------" << endl;
    cout << "Gaji pokok : Rp." << pokok << ",00" << endl;
    cout << "Lembur     : Rp." << lembur<< ",00" <<endl;
    cout << "Uang Makan : Rp." << makan << ",00" <<endl;
    cout << "Transport  : Rp." << trans << ",00" <<endl;
    cout << "=====================================" << endl;
}
