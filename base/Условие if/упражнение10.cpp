#include <iostream>
#include <conio.h>

using namespace std;

int k,n;
int main(){setlocale(0,"");
    cout<<"������� ����� �� 1 �� 180: ";
    cin>>k;
 
    if(k%2) {n=(k/20)+1;}
	else    {n=(k/2-1)%10;}
    
	cout<<n;
getch();
}
