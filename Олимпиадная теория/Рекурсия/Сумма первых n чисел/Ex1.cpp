#include <iostream>
#include <conio.h>

using namespace std;

//PRE; ����������� N (N<=sqrt(MAXINT)) //POST: ����� (..N)
int sumN_R (int N) 
{ cout <<N <<"\n";
    if (N<=1) return N; 
    return N+sumN_R(N-1);
}
int main()
{
    cout <<sumN_R(5) <<"\n";
getch();
return 0;   
}
