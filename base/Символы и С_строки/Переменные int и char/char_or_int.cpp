#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

unsigned char a;  //��������� char ���� � ��������� ��������

int main()
{  
    ifstream cin ("char_or_int.in");
    ofstream cout ("char_or_int.out");
cin >>a;    
cout <<a <<" " <<(int)a <<"\n\n";
a=126;             //char ����� ��������� � �������� ��������
cout <<a <<" "  << (int)a <<"\n\n";
return 0;
}
