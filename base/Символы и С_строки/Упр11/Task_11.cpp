#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

char str[9], m[3]="", north[9]="north", south[9]="south", west[8]="west", east[8]="east";
int x, a=0, b=0;

int main()
{  
    ifstream cin ("Task_11.in");
    ofstream cout ("Task_11.out");
 while (cin>>str>>x)
 {        
          if (strcmp(str,north)==0)  {a=a+x;}
          if (strcmp(str,south)==0)  {a=a-x;}
          if (strcmp(str,west)==0)  {b=b-x;}
          if (strcmp(str,east)==0)  {b=b+x;} 
          if(strcmp(str,m)==0) {break;}
 } 
       cout <<a<<" "<<b<<"\n";

return 0;
}

