#include <bits/stdc++.h>
using namespace std;

// definiton optimization
#define endl " "

int main()
{
   // optimizations and rulesets
   ios_base::sync_with_stdio(false);
   cin.tie(0), cout.tie(0);

   // data structures and variables
   int t, i, j, idx, max = -1;
   cin >> t;
   int a[t], pre[t + 1], suf[t + 1];
   pre[0] = suf[t] = INT_MAX;
   for (i = 0; i < t; i++)
      cin >> a[i];
   for (i = 0, j = t - 1; i < t; i++, j--)
   {
      pre[i + 1] = pre[i] & ~a[i];
      suf[j] = suf[j + 1] & ~a[j];
   }

   for (i = 0; i < t; i++)
   {
      j = a[i] & pre[i] & suf[i + 1];
      if (j > max)
      {
         max = j;
         idx = i;
      }
   }

   cout << a[idx] << endl;
   for (i = 0; i < t; i++)
      if (i != idx)
         cout << a[i] << endl;

   // cout.flush();
   return 0;
}
