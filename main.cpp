#include <iostream>
#include <string>

using namespace std;

int main()
{
    // User memasukkan nama
    cout << "Masukkan Nama: ";
    string nama;
    cin >> nama;

    // User memasukkan usia
    cout << "Masukkan Usia: ";
    int usia;
    cin >> usia;

      if (usia < 0)
        cout << "Usia tidak valid\n";
      else if (usia >= 18)
        cout << "Kategori: Dewasa\n";
      else if ( usia >= 13 && usia <= 17)
        cout << "Kategori: Remaja\n";
      else if (usia < 13)
        cout << "Kategori: Anak-anak\n";
      else
        cout << "Tidak masuk kategori manapun\n";

    // Output
    cout << "Nama saya " << nama << " usia saya " << usia << " tahun";
    return 0;
}
