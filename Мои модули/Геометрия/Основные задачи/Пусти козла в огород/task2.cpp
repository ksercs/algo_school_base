#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.14159265359;

int fl;

double sd, ln, cross, s, corner;

void in()
{
    //ifstream cin("task.in");
    cin >> sd >> ln;
}

void solution()
{
  if (ln > sd/2 && ln < sqrt(2*(sd/2)*(sd/2)))
  {
     cross = sqrt(ln*ln - (sd / 2)*(sd / 2));
     s = 4 * (cross * sd / 2);
     corner = abs(180/PI*atan2(-cross * (sd / 2) - (sd / 2) * cross, (sd / 2) * (sd / 2) - (cross*cross)));
     s += PI*(ln*ln)/360*(360-4*corner);
     fl = 1;
  }
}

void out()
{
    //ofstream cout("task.out");
    if (fl)   cout << fixed << setprecision(3)  << s << "\n";
    else   cout << fixed << setprecision(3)  << min(PI*ln*ln, sd*sd) << "\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
