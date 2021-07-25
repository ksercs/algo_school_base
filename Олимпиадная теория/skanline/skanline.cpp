#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

const int MAX_SIZE = 2*1e5+15;

int st, fn, n;
vector <pair <int,int> > sg;

bool cmp(pair <int, int> pi1, pair <int, int> pi2)
{
    if (pi1.first != pi2.first)
    {
        return pi1.first < pi2.first;
    }
    else
    {
        return pi1.second > pi2.second;
    }
}



int main()
{
    cin >>st >> fn;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int s,f;
        cin >> s >>f;
        sg.push_back(make_pair(s,1));
        sg.push_back(make_pair(f,-1));
    }
    sort(sg.begin(), sg.end(), cmp);
    cout <<"\nVIVOD:\n";
    for(int i=0; i < sg.size(); i++)
    {
        cout <<"koor: "<< sg[i].first <<"  flag: "<< sg[i].second<< "\n";
    }
    return 0;
}
