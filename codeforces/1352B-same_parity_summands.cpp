#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef map<int, int> mii;
typedef pair<int, int> ii;
typedef pair<ld, ld> dd;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
#define f first
#define s second

#define endl "\n"
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define sz(x) (int)(x).size()

const ld eps = 1e-10;

int t;
int main() {
   cin.tie(0)->sync_with_stdio(0);
   cin.exceptions(cin.failbit);

   cin >> t;
   while (t--) {
      int n, k;
      cin >> n >> k;

      int n1 = n - (k - 1);
      if (n1 > 0 && n1 % 2 == 1) {
         cout << "YES" << endl;
         rep(i, 0, k - 1) cout << "1 ";
         cout << n1 << endl;
         continue;
      }

      int n2 = n - 2 * (k - 1);
      if (n2 > 0 && n2 % 2 == 0) {
         cout << "YES" << endl;
         rep(i, 0, k - 1) cout << "2 ";
         cout << n2 << endl;
         continue;
      }
      cout << "NO" << endl;
   }

   return 0;
}
