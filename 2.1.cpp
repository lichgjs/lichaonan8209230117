#include <iostream>
using namespace std;
int main()
{
    
  char a;
    cin >> a;
    if(islower(a))
    { 
        cout << (char)toupper( a);
    }
    else {
        cout << int(a);
        
    }
  
}


