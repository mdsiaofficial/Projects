#include<bits/stdc++.h>
#include <stdlib.h>

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define PLL pair<ll,ll>
#define pii pair<int,int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)
// #define nl cout<<"\n"
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define mod9 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))


#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe

class Solution {
public:


    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1 = "";
        for(string ss: word1){
            result1 += ss;
        }
        string result2 = "";
        for(string ss: word2){
            result2 += ss;
        }

        return (result1==result2)?true:false;
    }
};


int main(){
    fastio;

    Solution s;
    

    vector<string> word1;
    word1.push_back("ab");
    word1.push_back("c");
    vector<string> word2;
    word2.push_back("a");
    word2.push_back("bc");
    cout<<s.arrayStringsAreEqual(word1,word2);

    
    return 0;
}