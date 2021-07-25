#include <iostream>
#include <fstream>

using namespace std;

int day, shop;
int milk[10][10], sum[10];

int main()
{
    ifstream cin ("milk.in");
    ofstream cout ("milk.out");
    for (day=1; day<=7; day++)
    {
        for (shop=1; shop<=8; shop++)
        {
            cin >>milk[day][shop];
        }
     }
     for (shop=1; shop<=8; shop++)
     {
         for (day=1; day<=7; day++)
         {
           //  cout<<milk[day][shop]<<"\n";
             sum[shop]=sum[shop]+milk[day][shop];
         }
         cout <<"Shop¹" <<shop <<" = "  <<sum[shop] <<"\n";
         //cout <<"\n";
     }
return 0;
}
