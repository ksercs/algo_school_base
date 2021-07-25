#include <iostream>
#include <fstream>

using namespace std;

char a;

int main()
{
    ifstream cin ("cin.in");
    ofstream cout ("cin.out");

while (cin>>a)
{
      cout <<a;
}

return 0;
}
