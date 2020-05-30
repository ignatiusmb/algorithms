#include <bits/stdc++.h>
using namespace std;

int main()
{
   // optimizations and rulesets
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   // data structures and variables
   int t, n, tot, max;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      tot = max = 0;
      cin >> n;
      int a[n];
      for (int i = 0; i < n; i++)
      {
         cin >> a[i];
         if (a[i] != -1)
         {
            if (tot == 0)
               tot = a[i];
            else
               tot = (tot + a[i]) / 2;
         }
      }
      for (int i = 0; i < n; i++)
      {
         if (a[i] == -1)
            a[i] = tot;
         if (i != 0 && abs(a[i - 1] - a[i]) > max)
            max = abs(a[i - 1] - a[i]);
      }

      cout << max << " " << tot << "\n";
   }
   return 0;
}
