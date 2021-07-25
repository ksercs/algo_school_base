#include <iostream>
#include <cstring>
#include <fstream>
 
using namespace std;

unsigned char c;
int main()
{   
    ifstream cin ("Task_4.in");
    ofstream cout ("Task_4.out");
    
cin>>c;
    
if ( (c>=65 && c<=90) || (c>=97 & c<=122) )
        {
             if ( ( (int) c>=97) && (c<=122) ) 
             { 
               c=c-32;
               cout <<c<<"\n"; 
             }
             else              
             { 
               c=c+32;
               cout <<c<<"\n"; 
             }
        }
else { cout <<"IT IS IMPOSSIBLE"<<"\n";}
return 0;
}
