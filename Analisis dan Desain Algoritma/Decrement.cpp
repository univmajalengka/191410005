#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b;
    string s;
    cout<<"Masukan 7 Angka : ";
    cin>>s;
    
    int z = s.length();
 
    char values[z];
    strcpy(values, s.c_str());
	std::reverse(values, values + z); 
	
	
	for (a=z-1; a>=0; a--){
		if (values[a]<1)
	std::cout << endl;
	else
		std::cout << values[a] ;
			for(b=1; b<=a; b++){
				std::cout << "0" ;
			}
		std::cout << endl;
	}
}
