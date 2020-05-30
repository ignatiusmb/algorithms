#include <iostream>
#include <algorithm>
#include <iterator>
#include <deque>
#include <vector>

int main() {
    std::deque<int> mxdq;
    std::vector<int> max;

    std::deque<int> mndq;
    std::vector<int> min;

    int n; std::cin >> n;
    int k; std::cin >> k;

    std::vector<long> win(n, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> win[i];
    }

    for (int i = 0; i < n; i++) {
        while (!mxdq.empty() && mxdq.back() < win[i]) mxdq.pop_back();
        mxdq.push_back(win[i]);
        while (!mndq.empty() && mndq.back() > win[i]) mndq.pop_back();
        mndq.push_back(win[i]);

        if (i >= k - 1){
            max.push_back(mxdq.front());
            if (win[i - k + 1] == mxdq.front()) mxdq.pop_front();

            min.push_back(mndq.front());
            if (win[i - k + 1] == mndq.front()) mndq.pop_front();
        }
    }

    std::copy(min.begin(), min.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::copy(max.begin(), max.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}