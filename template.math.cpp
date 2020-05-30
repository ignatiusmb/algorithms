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

struct Point {
   typedef Point P;
   ld x, y;
   explicit Point(ld x = 0, ld y = 0) : x(x), y(y) {}
   bool operator<(P p) const { return tie(x, y) < tie(p.x, p.y); }
   bool operator==(P p) const { return tie(x, y) == tie(p.x, p.y); }
   P operator+(P p) const { return P(x + p.x, y + p.y); }
   P operator-(P p) const { return P(x - p.x, y - p.y); }
   P operator*(ld d) const { return P(x * d, y * d); }
   P operator/(ld d) const { return P(x / d, y / d); }
   ld dot(P p) const { return x * p.x + y * p.y; }
   ld cross(P p) const { return x * p.y - y * p.x; }
   ld cross(P a, P b) const { return (a - *this).cross(b - *this); }
   ld dist2() const { return x * x + y * y; }
   ld dist() const { return sqrt((ld)dist2()); }
   // angle to x-axis in interval [-pi, pi]
   ld angle() const { return atan2(y, x); }
   P unit() const { return *this / dist(); }  // makes dist()=1
   P perp() const { return P(-y, x); }        // rotates +90 degrees
   P normal() const { return perp().unit(); }
   // returns point rotated 'a' radians ccw around the origin
   P rotate(ld a) const {
      return P(x * cos(a) - y * sin(a), x * sin(a) + y * cos(a));
   }
};

int t, n;
int main() {
   cin.tie(0)->sync_with_stdio(0);
   cin.exceptions(cin.failbit);
   //cout << fixed << setprecision(9);

   // cout.flush();
   return 0;
}
