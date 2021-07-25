#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int n;

vector <int> vec;



int lvl_count(int x)
{
    int level=1, ch=1;
    while(ch<x)
    {
     ch*=2;
     level++;
    }
return level;
}

void make_btree(int n)
{
     //cout <<log(n) <<" " <<log(2) <<"\n\n\n";
     int lvl = lvl_count(n);
 //cout <<"lvl " <<lvl <<"\n"; 
 int cn = (1<<(lvl))-1;
 vec.resize(cn); // cout <<"cn " <<cn <<"\n"; system("PAUSE");
}

int find_pred(int x)
{
  return (x/2);
}

int find_potom(int x, int lr)
{
  return (2*x + lr);
}

int main()
{
    ifstream cin ("btree.in");
    ofstream cout ("btree.out");
    cin >>n;
    make_btree(n);
    cout <<n <<"\npredok  " <<find_pred(n) <<"\npotom1  "<<find_potom(n, 0) <<"\npotom2  " <<find_potom(n, 1) <<"\n";
return 0;
}
