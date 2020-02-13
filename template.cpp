#include <bits/stdc++.h>
using namespace std;

// Remove if not working with numbers
void fastscan(int &number)
{
   bool negative = false;
   register int c;

   number = 0;

   c = getchar();
   if (c == '-')
   {
      negative = true;
      c = getchar();
   }

   for (; (c > 47 && c < 58); c = getchar())
      number = number * 10 + c - 48;

   if (negative)
      number *= -1;
}

int main()
{
   // optimizations and rulesets
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   // data structures and variables
   int t, n, i, j, res;

   fastscan(t);
   // cin >> t;
   for (i = 0; i < t; i++)
   {
      fastscan(n);
      // cin >> n;
      int a[n];
      for (j = 0; a[j]; j++)
      {
         // CODE starts here
      }

      cout << res << "\n";
   }
   return 0;
}
