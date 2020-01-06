#include<iostream>
using namespace std;
struct data_jam{
	int jam;
	int detik;
};
data_jam jam1, jam2, jam3;
int main(){
	cout<<"Masukan Jam 1 =";
	cin>>jam1.jam;
	jam1.detik = jam1.jam * 3600;
	cout<<jam1.detik<<endl;
	cout<<"Masukan Jam 2 =";
	cin>>jam2.jam;
	jam2.detik = jam2.jam * 3600;
	cout<<jam2.detik<<endl;
	jam3.detik = jam1.detik - jam2.detik;
	cout<<"Perbedaan Jam 1 dengan Jam 2 =";
	cout<<jam3.detik;
	cout<<" /detik";
	jam3.jam = jam3.detik / 3600;
	cout<<" Atau dalam jam "<<jam3.jam<<" Jam";
};
