#include <iostream>
using namespace std;
int main() {
  int max, jumlah, x = 1, lokasi;
  cout << "Masukkan jumlah data: ";
  cin >> jumlah;
  int array[jumlah];
  cout << "Masukkan " << jumlah << " angka\n";
  for (x = 0; x < jumlah; x ++) {
    cout << "Elemen ke-" <<(x+1) <<": ";
    cin >> array[x];
  }
  max = array[0];
  for(x = 0; x < jumlah; x++) {
    if (array[x] > max)  {
      max = array[x];
      lokasi = x+1;
    }
  }
  cout << "Nilai maksimum nya adalah " << max << " berada di baris " << lokasi << endl;
}
