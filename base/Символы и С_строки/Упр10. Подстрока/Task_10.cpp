#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

char s1[45], s2[65], s3[56];
int x, y, i, ans;

int main()
{
    ifstream cin  ("Task_10.in");
    ofstream cout ("Task_10.out");
    cin>>s1 >>s2;
    x=strlen(s1);
    y=strlen(s2);
    
    strncpy (s3, & s2[i], x);
    for (i=0; i<=y-1; i++)
     {
       if (strcmp(s1,s3)==0) {ans++;}
     }
       if (ans>0) {cout <<"YES"<<"\n";}
       else     {cout <<"NO"<<"\n";}

return 0;
}
