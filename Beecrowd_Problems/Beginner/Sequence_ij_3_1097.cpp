//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    
    for (int i = 1; i <= 9; i = i + 2)
    {
        int j = 7;
        for (int c = 1; c <= 3; c++)
        {
            
            cout << "I=" << i << " J=" << j << endl;
            j = j - 1;
            
        }
        
    }

    return 0;
}
