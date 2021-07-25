#include <iostream>
#include <fstream>

using namespace std;

char band[15];

int main()
{
    ifstream cin ("getline.in");
    ofstream cout ("getline.out");
while (cin.getline(band, 15) )
{
    cout <<band <<"\n";
}

return 0;
}
