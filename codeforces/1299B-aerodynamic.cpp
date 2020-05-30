#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);

   int n, i, h, similar = 1;
   cin >> n;
   h = n / 2;
   if (n % 2 != 0)
      similar = 0;
   int x[n], y[n], check[2];
   for (i = 0; i < n; i++)
   {
      cin >> x[i] >> y[i];
      if (!similar)
         continue;
      if (i == 0)
      {
         check[0] = x[i];
         check[1] = y[i];
      }
      else if (i == h)
      {
         check[0] += x[i];
         check[1] += y[i];
         continue;
      }
      if (i < h)
         continue;
      if (x[i] + x[i - h] != check[0] || y[i] + y[i - h] != check[1])
         similar = 0;
   }

   cout << (similar ? "YES" : "NO");
   return 0;
}
