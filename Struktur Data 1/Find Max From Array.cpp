#include<iostream>
using namespace std;

int main (){
	int i, A[5] = {2, 3, 4, 5, 10}, b[5];
		cout<<"nilai pada A[5] : ";
			for (i=0; i<5; i++){
				cout<< A[i];
			}
			
		cout<< " "<< endl;
	cout<<"Nilai  pada b[5] :";
		for (i = 0; i < 5; i++){
			b[i]=A[i];
		}
		
	for(i = 0; i < 5; i++){
		cout<< b[i];
	}
}
