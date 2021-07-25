#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <set>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

const int MAX_COUNT = 1000000 + 5;

int mas_n[MAX_COUNT];
int n, x;

int r_bin_search(int *mass, int zcount, int left, int right, int num)
{
    int mid, answer = -1;
    while (right-left >= 0)
    {
        mid = left + (right - left) / 2;
        if (mass[mid] < num)   {left = mid + 1;}
        else{
            if (mass[mid] > num) {right = mid - 1;}
            else                  {
                                    answer = mid;
                                    left = mid + 1;
                                  }
        }
    }
    if (answer == -1)
            {
              if (left == zcount+1) {answer = -zcount;}
              else                  {answer = -left;}
            }
    return answer;
}
//PRE: massive is sorted in increasing;
//POST: pair <(bool)TRUE, pair <(int)l_ind, (int)r_ind> > if this element exist or pair <(bool)FALSE, (int) ind, 0>
//            (ind ist index of element, after one this element have to be; l_ind ist index of left element; r_ind ist index of the right element)
/*pair <bool, pair <int, int> > bin_search(int *mass, int zcount, int left, int right, int num)
{
    // 1 <= left <= right;
    int mid;
    pair <bool, pair <int, int> > pi;
    pi.second.second = 0;
    while (right-left >= 0)
    {
        mid = left + (right - left) / 2;
        if (mass[mid] < num)   {left = mid + 1;}
        else{
            if (mass[mid] > num) {right = mid - 1;}
            else                  {
                                    pi.first = true;
                                    pi.second.first = mid;
                                    right = mid - 1;
                                  }
        }
    }
    if (pi.first == true)
    {
        pi.second.second = r_bin_search(mas_n, sizeof(mas_n)/sizeof(mas_n[0]), pi.second.first + 1, n, x);
        if (pi.second.second == 0)  {pi.second.second = pi.second.first;}
        return pi;
    }
    else
    {
        pi.second.first = left;
        return pi;
    }

}*/

void in()
{
    ifstream cin("bin.in");
    cin >>n;
    for (int i = 1; i <= n; i++)
    {
        cin >> mas_n[i];
    }
    cin >> x;
}

void solution()
{
    sort(mas_n + 1, mas_n + n + 1);
}

void out()
{
    ofstream cout("bin.out");
   // pair <bool, pair <int, int> > ans;
    //ans = bin_search(mas_n, sizeof(mas_n)/sizeof(mas_n[0]), 1, n, x);
    //cout << ans.first << ": " << ans.second.first << " " << ans.second.second << "\n";
    cout << r_bin_search(mas_n, n, 1, n, x) << "\n";
}

int main()
{
  in();
  solution();
  out();
  return 0;
}
