#include <iostream>
using namespace std;

int main() {

	int a[5] = {10,20,30,40,50};
	int b[5] = {10,20,30,40,50};
	

	for(int i=0; i<4; i++) {
		if(a[i] == b[i]) {
			cout<<"dua array sama";
			break;
		} else {
			cout<<"dua array berbeda";
			break;
		}
	}
	return 0;
}
