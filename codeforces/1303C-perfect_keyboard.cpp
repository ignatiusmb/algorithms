#include <bits/stdc++.h>
using namespace std;

struct Node
{
   char val;
   Node left, right;
};

int main()
{
   // optimizations and rulesets
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   // data structures and variables
   int t, n, g, b, days, count;
   string s;
   queue<char> Q;

   cin >> t;
   for (int i = 0; i < t; i++)
   {
      cin >> s;
      for (int j = 0; s[j]; j++)
      {
         Node{s.at(j)};
      }
      cout << days << "\n";
   }
   return 0;
}
