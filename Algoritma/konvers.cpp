#include<iostream>
using namespace std;
int KJ(J, M, D){
	int td, J, M, D;
	td=(J*3600,M*60,D);
	return td;
};
int main(){
	td1=KJ(J1,M1,D1);
	td2=KJ(J2,M2,D2);
	td3=td1-td2;
	cout<<td3;
}
