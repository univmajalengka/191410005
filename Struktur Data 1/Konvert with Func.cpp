#include <iostream>
using namespace std;
int KJ(int j,int m,int d){
	int konvert;
	konvert = (j * 3600) + (m * 60) + d;
	return konvert;
}
int main(){
	int j1, m1, d1, j2, m2, d2, K1, K2, hasil;
	
	cout<<"Masukan Jam :";
	cin>>j1;
	cout<<"Masukan Menit :";
	cin>>m1;
	cout<<"Masukan Detik :";
	cin>>d1;
	
	cout<<"Masukan Jam :";
	cin>>j2;
	cout<<"Masukan Menit :";
	cin>>m2;
	cout<<"Masukan Detik :";
	cin>>d2;
	
	K2 = KJ(j2, m2, d2);
	K1 = KJ(j1, m1, d1);
	hasil = K2-K1;
	cout<<hasil;
}
