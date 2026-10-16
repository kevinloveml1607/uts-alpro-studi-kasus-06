
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
    string kodeBarang, namaBarang, status;
    int stokAwal, barangMasuk, barangTerjual;
    int stokTersedia, stokAkhir, stokMinimum;
    int jumlahPesan;
    double hargaBeli, biayaPemesanan;
    char ulang;

    do {
        cout << "\n====================================\n";
        cout << " SISTEM EVALUASI PERSEDIAAN BARANG\n";
        cout << "====================================\n";

        // Input kode dan nama barang
        cout << "Masukkan kode barang : ";
        cin >> ws;
        getline(cin, kodeBarang);

        cout << "Masukkan nama barang : ";
        getline(cin, namaBarang);

        // Validasi stok awal
        do {
            cout << "Masukkan stok awal : ";

            if (!(cin >> stokAwal)) {
                cout << "Input harus berupa angka!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                stokAwal = -1;
            } else if (stokAwal < 0) {
                cout << "Stok awal tidak boleh negatif!\n";
            }
        } while (stokAwal < 0);

        // Validasi barang masuk
        do {
            cout << "Masukkan barang masuk : ";

            if (!(cin >> barangMasuk)) {
                cout << "Input harus berupa angka!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                barangMasuk = -1;
            } else if (barangMasuk < 0) {
                cout << "Barang masuk tidak boleh negatif!\n";
            }
        } while (barangMasuk < 0);

        // Stok tersedia sebelum penjualan
        stokTersedia = stokAwal + barangMasuk;

        // Validasi barang terjual
        do {
            cout << "Masukkan barang terjual : ";

            if (!(cin >> barangTerjual)) {
                cout << "Input harus berupa angka!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                barangTerjual = -1;
            } else if (barangTerjual < 0) {
                cout << "Barang terjual tidak boleh negatif!\n";
            } else if (barangTerjual > stokTersedia) {
                cout << "Penjualan melebihi stok tersedia!\n";
                cout << "Stok tersedia: " << stokTersedia << endl;
                barangTerjual = -1;
            }
        } while (barangTerjual < 0);

        // Validasi stok minimum
        do {
            cout << "Masukkan stok minimum : ";

            if (!(cin >> stokMinimum)) {
                cout << "Input harus berupa angka!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                stokMinimum = -1;
            } else if (stokMinimum < 0) {
                cout << "Stok minimum tidak boleh negatif!\n";
            }
        } while (stokMinimum < 0);

        // Validasi harga beli
        do {
            cout << "Masukkan harga beli per unit (Rp): ";

            if (!(cin >> hargaBeli)) {
                cout << "Input harus berupa angka!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                hargaBeli = -1;
            } else if (hargaBeli < 0) {
                cout << "Harga beli tidak boleh negatif!\n";
            }
        } while (hargaBeli < 0);

        // Menghitung stok akhir
        stokAkhir = stokAwal + barangMasuk - barangTerjual;

        // Menentukan status dan jumlah pemesanan
        if (stokAkhir == 0) {
            status = "Habis";
            jumlahPesan = 2 * stokMinimum;
        } else if (stokAkhir < stokMinimum) {
            status = "Menipis";
            jumlahPesan = (2 * stokMinimum) - stokAkhir;
        } else {
            status = "Aman";
            jumlahPesan = 0;
        }

        // Menghitung biaya pemesanan
        biayaPemesanan = jumlahPesan * hargaBeli;

        // Menampilkan hasil evaluasi
        cout << fixed << setprecision(0);
        cout << "\n====================================\n";
        cout << "         HASIL EVALUASI\n";
        cout << "====================================\n";
        cout << "Kode barang       : " << kodeBarang << endl;
        cout << "Nama barang       : " << namaBarang << endl;
        cout << "Stok awal         : " << stokAwal << endl;
        cout << "Barang masuk      : " << barangMasuk << endl;
        cout << "Stok tersedia     : " << stokTersedia << endl;
        cout << "Barang terjual    : " << barangTerjual << endl;
        cout << "Stok minimum      : " << stokMinimum << endl;
        cout << "Stok akhir        : " << stokAkhir << endl;
        cout << "Status persediaan : " << status << endl;
        cout << "Jumlah pemesanan  : " << jumlahPesan << " unit\n";
        cout << "Harga beli/unit   : Rp" << hargaBeli << endl;
        cout << "Biaya pemesanan   : Rp" << biayaPemesanan << endl;
        cout << "====================================\n";

        // Pilihan mengulang proses
        cout << "\nEvaluasi barang lain? (Y/N): ";
        cin >> ulang;

    } while (ulang == 'Y' || ulang == 'y');

    cout << "\nProgram selesai. Terima kasih!\n";

    return 0;
}
