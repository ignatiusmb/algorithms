#include <bits/stdc++.h>
using namespace std;

bool check(string a, string b)
{
   int i = 0, j = b.length() - 1;
   for (; a[i]; i++, j--)
   {
      if (a.at(i) == b.at(j))
      {
         if (i == j || i - j == 1)
            return true;
         continue;
      }
      return false;
   }
}

struct pnd
{
   string word;
   bool used;
};

int main()
{
   // optimizations and rulesets
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   // data structures and variables
   int t, i, j, n, m, idx = -1, longest = -1, res;
   string s;
   stringstream ss;
   vector<pnd> p;

   getline(cin, s);
   ss << s;
   ss >> n >> m;
   string a[n];
   int used[n] = {0};
   for (i = 0; i < n; i++)
   {
      getline(cin, a[i]);
      if (a[i] == string(a[i].rbegin(), a[i].rend()))
      {
         p.push_back(pnd{a[i], false});
         used[i] = 1;
         if (longest < m)
         {
            longest = m;
            idx = i;
         }
         continue;
      }

      for (j = i - 1; j >= 0; j--)
         if (!used[j] && check(a[i], a[j]))
         {
            p.push_back(pnd{a[j] + a[i], 0});
            used[i] = used[j] = 1;
            if (longest < m * 2)
            {
               longest = m * 2;
               idx = p.size() - 1;
            }
            break;
         }
   }

   while (longest % 2 == 0 && p.size() > 1)
   {
      int ru_idx = 0, ru_size = 0;
      for (i = 0; i < p.size(); i++)
      {
         if (i == idx || p[i].used)
            continue;
         if (p[i].word.size() > ru_size)
         {
            ru_size = p[i].word.size();
            ru_idx = i;
         }
      }
      if (ru_size == 0)
         break;
      p[idx].word.insert(longest / 2, p[ru_idx].word);
      longest += p[ru_idx].word.size();
      p[ru_idx].used = true;
      if (p[ru_idx].word.size() / 2 < m)
         break;
   }

   if (idx != -1)
      cout << longest << "\n"
           << p[idx].word << "\n";
   else
      cout << 0 << "\n"
           << ""
           << "\n";
   return 0;
}
