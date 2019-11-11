#include<iostream>
using namespace std;
int main(){
cout<<"Pilih Menu"<<endl;
cout<<"1. Tarik Dana"<<endl;
cout<<"2. Transfer Dana"<<endl;
cout<<"3. Cek Dana"<<endl;
int menu;
cin>>menu;
if(menu==1){
	cout<<"Tarik Dana";
}else if(menu==2){
	cout<<"Transfer Dana";
}else if(menu==3){
	cout<<"Cek Dana";
}else{
	cout<<"Menu Tidak Ada";
}
}
