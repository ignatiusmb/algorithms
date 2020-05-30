// passed!
#include <iostream>

using namespace std;

int main()
{
   int tc, n, sum = 0, steps = 0;
   cin >> tc;

   for (int i = 0; i < tc; i++, sum = 0, steps = 0)
   {
      cin >> n;
      for (int j = 0; j < n; j++)
      {
         int num;
         cin >> num;

         if (num == 0)
         {
            steps++;
            sum++;
            continue;
         }
         sum += num;
      }
      if (sum == 0)
         steps++;
      cout << steps << endl;
   }

   return 0;
}
