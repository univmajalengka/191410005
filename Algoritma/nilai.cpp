#include<iostream>
using namespace std;
int main(){
float nilai;
cout<<"Masukan Nilai = ";
cin>>nilai;
if(nilai>=80 && nilai<=100){
	cout<<"A";
}
else if(nilai>=68 && nilai<=79){
	cout<<"B";
}
else if(nilai>=56 && nilai<=67){
	cout<<"C";
}
else if(nilai>=45 && nilai<=55){
	cout<<"D";
}
else if(nilai>=0 && nilai<=44){
	cout<<"E";
}
else {
	cout<<"ERROR";
}}
