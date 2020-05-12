#include<iostream>
#include<conio.h>

int main()
{
int i, j, k;
for(i=6;i>=1;i--)
{
for(j=1;j<i;j++)
{
std::cout << " ";
}
for(k=6;k>=i;k--)
{
std::cout << "*";
}
std::cout<<std::endl;
}
getch();
}
