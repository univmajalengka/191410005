#include<iostream>
using namespace std;
int kj(int j, int m, int d){
	int td;
	td = (j*3600)+(m*60)+d;
	return td;
}
int main(){
	int tdp,td1,td2,j,m,d;
	cout<<"Masukan Jam : ";
	cin>>j;
	cout<<"Masukan Menit : ";
	cin>>m;
	cout<<"Masukan Detik : ";
	cin>>d;
	td1 = kj(j,m,d);
	td2 = kj(j,m,d);
	tdp = td2-td1;
	cout<<tdp;
	return 0;
}
