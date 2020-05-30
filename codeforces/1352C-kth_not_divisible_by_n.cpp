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
      cout << k + ((k - 1) / (n - 1)) << endl;
   }

   return 0;
}
