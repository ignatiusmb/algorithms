#include <bits/stdc++.h>
using namespace std;

typedef double LD;

const LD eps = 1e-10;

struct node
{
   LD val;
   int count;
};

int main()
{
   ios_base::sync_with_stdio(false);
   cout << fixed << setprecision(10);

   int t, n, i, total, skip;
   stack<node> stack;

   cin >> t;

   node a[t];
   for (i = 0; i < t; i++)
   {
      cin >> n;
      a[i] = node{n, 1};

      if (i == 0)
      {
         stack.push(a[i]);
         continue;
      }

      total = 1;
      LD tmp = n;
      while (!stack.empty() && tmp < stack.top().val + eps)
      {
         tmp = stack.top().val * stack.top().count + tmp * total;
         total += stack.top().count;
         tmp /= total;
         stack.pop();
      }
      a[i + 1 - total] = node{tmp, total};
      stack.push(a[i + 1 - total]);
   }

   skip = 1;
   for (i = 0; i < t; i += skip)
   {
      skip = a[i].count;
      while (a[i].count--)
         cout << a[i].val << "\n";
   }

   return 0;
}
