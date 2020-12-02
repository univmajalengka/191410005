#include<iostream>
using namespace std;

int main() {

    int x[10], y[10], i, n;

    cout << "Masukan jumlah elemen:";
    cin>>n;

    cout << "Masukan array:";
    for (i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (i = 0; i < n; i++) {
        y[i] = x[i];
    }
    cout << "Masukan array:";
    for (i = 0; i < n; i++) {
        cout << y[i] << " ";
    }

    return 0;
}
