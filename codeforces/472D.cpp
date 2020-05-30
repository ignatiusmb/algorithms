#include <iostream>
#include <vector>

int main()
{
   int n;
   std::cin >> n;
   std::vector<std::vector<int>> distance(n, std::vector<int>(n, 0));

   for (int row = 0; row < n; row++)
   {
      for (int col = 0; col < n; col++)
      {
         std::cin >> distance[row][col];
      }
   }

   bool possible = 1;

   for (int row = 0; row < n; row++)
   {
      if (distance[row][row])
         possible = 0;
      if (!possible)
         break;

      for (int col = row + 1; col < n; col++)
      {
         if (distance[row][col] != distance[col][row] || !distance[row][col])
         {
            possible = 0;
            break;
         }
      }
   }

   for (int node = 0; node < n; node++)
   {
      if (!possible)
         break;
      int closest = 1;
      for (int other = 0; other < n; other++)
      {
         if (node == other)
            continue;
         if (distance[node][other] < distance[node][closest])
            closest = other;
      }

      for (int other = 0; other < n; other++)
      {
         int current = distance[node][other] - distance[other][closest];
         if (current < 0)
            current = -current;
         if (distance[node][closest] != current)
         {
            possible = 0;
            break;
         }
      }
   }

   std::cout << (possible ? "YES" : "NO");

   return 0;
}
