#include <iostream>
using namespace std;

int main() {
    cout << "Bilangan prima dari 1 sampai 50 adalah: " << endl;

    // Untuk menghitung berapa banyak bilangan prima
    int JumlahBilanganPrima = 0;   
   
    // Untuk menghitung jumlah semua bilangan prima
    int TotalNilaiBilanganPrima = 0;    

    for (int m = 2; m <= 50; m++) {
        bool prima = true;

        // Cek apakah i bilangan prima
        for (int n = 2; n <= m / 2; n++) {
            if (m % n == 0) {
                prima = false;
                break;
            }
        }

        if (prima) {
            cout << m << " ";
            
            // Tambahkan 1 ke jumlah bilangan prima
            JumlahBilanganPrima++;   
          
            // Tambahkan nilai bilangan prima ke total
            TotalNilaiBilanganPrima += m; 
        }
    }

    // Baris kosong untuk rapi
    cout << endl;

    // Tampilkan hasil perhitungan
    cout << "Total bilangan prima: " << JumlahBilanganPrima << endl;
    cout << "Jumlah nilai semua bilangan prima: " << TotalNilaiBilanganPrima << endl;

    return 0;
}
