#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <set>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

string ch1, ch2, ink;
int ind=1;

vector <int> vec;

void in()
{
    //ifstream cin ("");
    cin >> ch1 >> ch2;
}

void solution()
{
    if (ch1.size() < ch2.size()) {swap(ch1, ch2);}
    vec.resize(5000);
    while (ind <= ch2.size())
    {
        int res = vec[ind] + (ch1[ch1.size()-ind]-'0') + (ch2[ch2.size()-ind]-'0');
        ink = char(res%10+'0') + ink;
        vec[ind+1] = res/10;
        ind++;
    }
    //cout <<"1: " << ink << "\n";
    //cout << vec[ind] << "\n";
    while (vec[ind] != 0 && ind <= ch1.size())
    {
        int res = vec[ind] + int(ch1[ch1.size()-ind]-'0');
        //cout << res << "\n ";
        ink = char(res%10+'0') + ink;
        vec[ind+1] = res/10;
        ind++;
    }
    if (vec[ind] != 0) {ink = char(vec[ind]+'0') + ink;}
    ind--;
    //cout <<"\n2: " << ink << "\n";
    ink = ch1.substr(0, ch1.size()-ind) + ink;
    //cout <<"3: " << ink << "\n";
}

void out()
{
     //ofstream cout ("");
     cout << ink << "\n";
}

int main()
{
    in();
    solution();
    out();
return 0;
}
