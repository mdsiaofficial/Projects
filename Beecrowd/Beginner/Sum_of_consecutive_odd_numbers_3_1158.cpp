#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;

        int sum=0;
        int c = 0;

        // for (int j = x; j <= y; j++){
        //     if(j%2!=0){
        //         sum =sum + j;
        //     }
        // }

        while (c<=y)
        {
            if(j%2!=0){
                sum =sum + j;
            }
        }
        
        cout << sum << endl;
    }
        return 0;
}
