// accepted!
#include <bits/stdc++.h>
using namespace std;

int main()
{
   // optimizations and rulesets
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   // data structures and variables
   int t, last, remove, zero_trail;
   string s;
   bool exist = false;

   cin >> t;
   for (int i = 0; i < t; i++)
   {
      remove = 0;
      exist = false;
      zero_trail = 0;
      cin >> s;
      for (int j = 0; s[j]; j++)
      {
         if (s.at(j) == '1')
         {
            zero_trail = 0;
            exist = true;
         }
         else if (exist)
         {
            zero_trail++;
            remove++;
         }
      }
      remove -= zero_trail;
      cout << remove << "\n";
   }
   return 0;
}
