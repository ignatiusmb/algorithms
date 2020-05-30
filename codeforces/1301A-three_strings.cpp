#include <bits/stdc++.h>
using namespace std;

int main()
{
   // optimizations and rulesets
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   // data structures and variables
   int n;
   string a, b, c;
   bool possible;

   cin >> n;
   for (int i = 0; i < n; i++)
   {
      possible = true;
      cin >> a >> b >> c;
      for (int i = 0; a[i]; i++)
      {
         if (a.at(i) == c.at(i) || b.at(i) == c.at(i))
            continue;
         possible = false;
         cout << "NO" << endl;
         break;
      }
      if (!possible)
         continue;
      cout << "YES" << endl;
   }
   return 0;
}
