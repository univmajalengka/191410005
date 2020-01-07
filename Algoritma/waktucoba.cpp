#include<iostream>
using namespace std;
struct data_jam{
	int jam;
	int menit;
	int detik;
	int jam2;
	int menit2;
	int detik2;
};
data_jam jam1, jam2, jam3;
int main(){
	cout<<"Masukan Detik = ";
	cin>>jam1.detik;
	if(jam1.detik > 60 ) jam1.menit2 = jam1.detik/60;
	jam1.detik = jam1.detik%60;
	cout<<"Masukan Menit = ";
	cin>>jam1.menit;
	jam1.menit = jam1.menit + jam1.menit2;
	if(jam1.menit > 60 ) jam1.jam2 = jam1.menit/60;
	jam1.menit = jam1.menit%60;
	cout<<"Masukan Jam = ";
	cin>>jam1.jam;
	cout<<jam1.jam<<":"<<jam1.menit<<":"<<jam1.detik<<endl;
	cout<<"Masukan Detik = ";
	cin>>jam2.detik;
	if(jam2.detik > 60 ) jam2.menit2 = jam2.detik/60;
	jam2.detik = jam2.detik%60;
	cout<<"Masukan Menit = ";
	cin>>jam2.menit;
	jam2.menit = jam2.menit + jam2.menit2;
	if(jam2.menit > 60 ) jam2.jam2 = jam2.menit/60;
	jam2.menit = jam2.menit%60;
	cout<<"Masukan Jam = ";
	cin>>jam2.jam;
	cout<<jam2.jam<<":"<<jam2.menit<<":"<<jam2.detik<<endl;
	cout<<"Perbedaan Jam 1 dengan Jam 2"<<endl;
	if ((jam1.detik - jam2.detik) < 0){
	jam3.detik = jam1.detik + 60 - jam2.detik;
	jam3.menit = jam1.menit - 1;}
	else {
		jam1.detik - jam2.detik;
	}
	jam3.detik = jam1.jam * 3600 + jam1.menit * 60 + jam1.detik - jam2.jam * 3600 + jam2.menit * 60 + jam2.detik;
	cout<<"Selisih dalam detik = "<<jam3.detik<<endl;
	jam3.menit = jam1.jam * 60 + jam1.menit + jam1.detik / 60 - jam2.jam * 60 + jam2.menit + jam2.detik / 60;
	cout<<"Selisih dalam menit = "<<jam3.menit<<endl;
	jam3.jam = jam1.jam + jam1.menit / 60 + jam1.detik / 3600 - jam2.jam + jam2.menit / 60 + jam2.detik / 3600;
	cout<<"Selisih dalam jam = "<<jam3.jam<<endl;
	
	jam3.menit = jam1.menit - jam2.menit;
	jam3.jam = jam1.jam - jam2.jam;
	cout<<jam3.jam<<":"<<jam3.menit<<":"<<jam3.detik<<endl;
};
