#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int a, b;
	int value[]={1,2,2,5,4,4,1};
	std::reverse(value, value + 7); 
	
	for (a=6; a>=0; a--){
		std::cout << value[a] ;
			for(b=1; b<=a; b++){
				std::cout << "0" ;
			}
		std::cout << endl;
	}	
}
