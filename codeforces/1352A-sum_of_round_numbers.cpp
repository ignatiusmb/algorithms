#include <bits/stdc++.h>
using namespace std;

// optimization macros
#define endl "\n"

typedef long long ll;
typedef long double ld;
#define f first
#define s second
// data structures macros
#define ii pair<int, int>
#define dd pair<ld, ld>
#define vi vector<int>
#define vii vector<ii>
#define vll vector<ll>

const ld eps = 1e-10;

int t;
int main() {
   cin.tie(0)->sync_with_stdio(0);
   cin.exceptions(cin.failbit);

   cin >> t;
   while (t--) {
      string n;
      cin >> n;
      vi count;
      for (int i = 0; i < n.size(); i++) {
         if (n[i] == '0') continue;
         count.push_back(i);
      }
      cout << count.size() << endl;
      for (int i = 0; i < count.size(); i++) {
         cout << n[count[i]] << string(n.size() - count[i] - 1, '0') << " ";
      }
      cout << endl;
   }

   return 0;
}
