#include <iostream>
#include <fstream>

using namespace std;

int x;

int fact (int n)
{
    //if (n==0) {return 1;}
    if (n<=1) return 1;
    else      return n*fact(n-1);
}

int main()
{
    ifstream cin ("Task_1.in");
    ofstream cout ("Task_1.out");

  for (int i = 1; i <= 10; i++)
  {
      cout << fact(i) <<", ";
  }

return 0;
}
