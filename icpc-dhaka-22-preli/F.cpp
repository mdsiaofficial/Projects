#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

int main(){
    int t;
    cin>>t;
    //string years[t];
    //string bloods[t];
    vector<string>years;
    vector<int>yearcount;
    vector<int>bldcount;
    vector<string>bloods;
    for(int i=0; i<t; i++)
    {
        //std::string str ("01/02/2023#15:58:31 2022100011006@seu.edu.bd 28/07/2001 A+");
        std::string str;
        //getline(cin, str);
        cin.getline (str, 100);
        //cin>>str;
        char buffer[4];
        std::size_t length = str.copy(buffer,4,51);
        buffer[length]='\0';
        //std::cout << "buffer contains: " << buffer << '\n';
        years.push_back(buffer);
        //cout<<years[i]<<endl;
        char bld[2];
        std::size_t lengt = str.copy(bld,2,56);
        bld[lengt]='\0';
        //std::cout << "blood contains: " << bld << '\n';
        bloods.push_back(bld);
        //years[i]= string(1,buffer);
        //cout<<years[i];

    }
    return 0;
}
// a+ =56,58
// 2001 = 52,53,54,55