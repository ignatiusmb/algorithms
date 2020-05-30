#include <bits/stdc++.h>
using namespace std;

int main()
{
   // optimizations and rulesets
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   // data structures and variables
   int t, n, g, b, days, count;

   cin >> t;
   for (int i = 0; i < t; i++)
   {
      cin >> n >> g >> b;

      count = g * (n / 2 + 1);
      days = count + (n / 2 + 1);

      cout << days << "\n";
   }
   return 0;
}
