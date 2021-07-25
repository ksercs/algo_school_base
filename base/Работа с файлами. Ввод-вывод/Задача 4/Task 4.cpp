#include <iostream>
#include <fstream>

using namespace std;

int a, b, c, d;

int main()
{
    ifstream cin ("Task 4.in");
    ofstream cout ("Task 4.out");
    cin >>a >>b;
    c=a;
    d=b;
    a=d;
    b=c;
    
    cout <<a <<" " <<b <<"\n";
return 0;
}

