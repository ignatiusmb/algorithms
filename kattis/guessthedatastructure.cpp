#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
   int n;
   while (cin >> n) {
      bool possibleStack = true, possibleQueue = true, possiblePQ = true;
      stack<int> myStack;
      queue<int> myQueue;
      priority_queue<int> myPQ;

      while (n--) {
         int type, val;
         cin >> type >> val;

         if (type == 1) {
            if (possibleStack) myStack.push(val);
            if (possibleQueue) myQueue.push(val);
            if (possiblePQ) myPQ.push(val);
         } else {
            if (possibleStack)
               if (myStack.empty() || myStack.top() != val)
                  possibleStack = false;
               else
                  myStack.pop();
            if (possibleQueue)
               if (myQueue.empty() || myQueue.front() != val)
                  possibleQueue = false;
               else
                  myQueue.pop();
            if (possiblePQ)
               if (myPQ.empty() || myPQ.top() != val)
                  possiblePQ = false;
               else
                  myPQ.pop();
         }
      }

      if ((possibleStack && possibleQueue) || (possibleQueue && possiblePQ) || (possibleStack && possiblePQ))
         cout << "not sure\n";
      else if (possibleStack)
         cout << "stack\n";
      else if (possibleQueue)
         cout << "queue\n";
      else if (possiblePQ)
         cout << "priority queue\n";
      else
         cout << "impossible\n";
   }

   return 0;
}
