#include<iostream>
using namespace std;
struct data_jam{
	int jam;
	int menit;
	int detik;
};
data_jam jam1, jam2, jam3;
int main(){
	cout<<"Masukan Jam = ";
	cin>>jam1.jam;
	cout<<"Masukan Menit = ";
	cin>>jam1.menit;
	cout<<"Masukan Detik = ";
	cin>>jam1.detik;
	cout<<jam1.jam<<":"<<jam1.menit<<":"<<jam1.detik<<endl;
	cout<<"Masukan Jam = ";
	cin>>jam2.jam;
	cout<<"Masukan Menit = ";
	cin>>jam2.menit;
	cout<<"Masukan Detik = ";
	cin>>jam2.detik;
	cout<<jam2.jam<<":"<<jam2.menit<<":"<<jam2.detik<<endl;
	cout<<"Perbedaan Jam 1 dengan Jam 2"<<endl;
	jam3.detik = jam2.jam * 3600 + jam2.menit * 60 + jam2.detik - jam1.jam * 3600 + jam1.menit * 60 + jam1.detik;
	cout<<"Selisih dalam detik = "<<jam3.detik<<endl;
	jam3.menit = jam2.jam * 60 + jam2.menit + jam2.detik / 60 - jam1.jam * 60 + jam1.menit + jam1.detik / 60;
	cout<<"Selisih dalam menit = "<<jam3.menit<<endl;
	jam3.jam = jam2.jam + jam2.menit / 60 + jam2.detik / 3600 - jam1.jam + jam1.menit / 60 + jam1.detik / 3600;
	cout<<"Selisih dalam jam = "<<jam3.jam<<endl;
	jam3.detik = jam2.detik - jam1.detik;
	jam3.menit = jam2.menit - jam1.menit;
	jam3.jam = jam2.jam - jam1.jam;
	cout<<jam3.jam<<":"<<jam3.menit<<":"<<jam3.detik<<endl;
};
