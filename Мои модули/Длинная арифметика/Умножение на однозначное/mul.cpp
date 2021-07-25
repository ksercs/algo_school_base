#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <set>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int ch;
string str;
char prev = '0';

vector <int> vec;

void in()
{
    //ifstream cin ("");
    cin >> str >> ch;
}

void solution()
{
    vec.resize(str.size());
    for (int i = str.size()-1; i >= 0; i--)
    {
        int res = ((str[i]-'0')*ch);
        str[i] = res%10 + vec[i] +'0';
        if (i != 0) {vec[i-1] = res/10;}
        else        {prev = res/10 + '0';}
    }
    if (prev != '0') {str = prev + str;}
}

void out()
{
    cout << str << "\n";
    //ofstream cout ("");
}

int main()
{
    in();
    solution();
    out();
return 0;
}
