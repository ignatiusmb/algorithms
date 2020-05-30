#include <bits/stdc++.h>
using namespace std;

int main()
{
   // optimizations and rulesets
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   // data structures and variables
   int t, i, x, y, a, b, dist, res;

   cin >> t;
   for (i = 0; i < t; i++)
   {
      cin >> x >> y >> a >> b;
      dist = y - x;
      if (dist < a + b)
         res = -1;
      if (dist % (a + b) == 0)
         res = abs(dist / (a + b));
      else
         res = -1;

      cout << res << "\n";
   }
   return 0;
}
