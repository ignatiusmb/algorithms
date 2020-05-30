#include <bits/stdc++.h>
using namespace std;

// definiton optimization
#define endl "\n"

int main()
{
   // optimizations and rulesets
   ios_base::sync_with_stdio(false);
   cin.tie(0), cout.tie(0);

   int t, n, i, j;
   cin >> t;
   for (i = 0; i < t; i++)
   {
      cin >> n;
      int a[n * 2] = {0};
      for (j = 0; j < n; j++)
         cin >> a[j] >> a[n + j];
      sort(a, a + n * 2);
      cout << a[n] - a[n - 1] << endl;
      // cout.flush();
   }

   return 0;
}
