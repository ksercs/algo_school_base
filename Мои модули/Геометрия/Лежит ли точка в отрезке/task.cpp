#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <set>
#include <queue>
#include <algorithm>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int x;

pair <int, int> sg;

bool point_in_segment(pair <int, int> pi, int p)
{
    if (pi.first > pi.second) {swap(pi.first, pi.second);}
    if (p >= pi.first && p <= pi.second) {return true;}
    return false;
}

void in()
{
    //ifstream cin("trains.in");
    cin >> sg.first >> sg.second >> x;
}

void solution()
{
}

void out()
{
    //ofstream cout("trains.out");
     cout << point_in_segment(sg, x) << "\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
