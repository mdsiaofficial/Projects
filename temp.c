#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define ll long long
#define ld long double
#define ull unsigned long long

#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)

#define YES printf("YES\n");
#define Yes printf("Yes\n");
#define yes printf("yes\n");
#define NO printf("NO\n");
#define No printf("No\n");
#define no printf("no\n");

#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

#define forn(i, n) for(int i = int(i); i < int(n); i++)
#define mod9 90000007


// * -----------------------------------------------------------
// * run program on cli
// *  -----------------------------------------------------------
//  gcc temp.c -o temp
//          or
//  gcc temp.c -o temp.exe
//  .\temp.exe


void solve() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", a + b);
  YES;
}


int main() {

  //* For External input/output
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  ll t;
  scanf("%d", &t);

  //* Test case loop
  for (ll i = 1; i <= t; i++) {
    // printf("Case #%d: ", i);
    solve();
  }

  //* Single test
  // solve();

  return 0;
}
