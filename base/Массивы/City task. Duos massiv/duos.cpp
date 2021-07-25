#include <iostream>
#include <fstream>

using namespace std;

int N, C, i, g, a[100], duos [100][100];

int main()
{
    ifstream cin ("duos.in");
    ofstream cout ("duos.out");
 cin >>C >>N;
    for (i=0; i<C; i++)
    {
        cin >>a[i];
        //cout <<a[i] <<" ";
    }
    for (g=0; g<=N; g++)
    {
        duos[100][g]=g; cout <<duos[100][g]; 
    }
return 0;
}
