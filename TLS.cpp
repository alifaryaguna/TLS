// Program ini adalah kalkulator panjang sisi segitiga siku-siku, yang menggunakan teorema Pythagoras.
#include <iostream>
#include <cmath>
using namespace std;

void program(){

    // Variabel
    char choice;
    double a, b;

    // Input Hipotenusa
    cout << "Kalkulator Segitiga Siku-Siku\n" << endl << "Apakah salah satu dari dua sisi yang Anda punya merupakan hipotenusa?" << endl << "(Y/N): ";
    cin >> choice;


    // Apabila ada hipotenusa
    if(choice == 'Y' or choice == 'y') {
        cout << endl << "Panjang hipotenusa: ";
        cin >> a;
        cout << endl << "Panjang sisi lain: ";
        cin >> b;

        // Kalkulasi sisi ketiga
        if(a>b) {
        cout << endl << "Panjang sisi ketiga segitiga siku-siku adalah: " << sqrt((a*a)-(b*b)); 
        }

        // Apabila ada sisi yang lebih panjang dari hipotenusa
        else {
        cout << endl << "Sisi hipotenusa seharusnya sisi terpanjang.";
        }
    }

    // Apabila kedua sisi yang ada adalah sisi non-hipotenusa
    else {
        cout << endl << "Panjang sisi satu: ";
        cin >> a;
        cout << endl << "Panjang sisi dua: ";
        cin >> b;
        cout << endl << "Panjang sisi hipotenusa segitiga siku-siku adalah: " << sqrt((a*a)+(b*b)); 
    }
}

// Proses looping
int main() {
    char pengulangan;
    do{
        program();
        cout << endl << endl << "Apakah Anda ingin mengulang?\n" << "(Y/N): ";
        cin >> pengulangan;
        cout << endl << endl;
    } while (pengulangan == 'Y' or pengulangan == 'y');
    return 0;
}
