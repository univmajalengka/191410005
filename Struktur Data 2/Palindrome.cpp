#include<iostream>
#include<cstring>

using namespace std;

void value(char cstring[]);

int main(){

char word[20];
cout<<"Masukan kata : ";
cin>>word;

value(word);

return 0;}

void value(char cstring[]){

int length =strlen(cstring);
int count = 0;

for(int i = 0; i<length/2;i++)

   if(cstring[i]== cstring[ (length-1)-i])
   { count++;}
     
   if(count == length/2){
   cout<<"Ini adalah PALINDROME";}
   else {
   cout<<"Ini bukan PALINDROME";}
}
