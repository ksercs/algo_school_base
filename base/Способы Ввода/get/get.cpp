#include <iostream>
#include <fstream>

using namespace std;

char band;

int main()
{
    ifstream cin ("get.in");
    ofstream cout ("get.out");
 while (cin.get(band))
  {
        cout <<band;
  }
return 0;
}
