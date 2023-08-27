#include <cmath>
#include <cstdio>
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    int* a = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    
    deque<int> maxima;
    
    for (int i = 0; i < q; ++i)
    {
        int d;
        cin >> d;
        maxima.clear();
        
        int currentMax = 0;
        for (int j = d - 1; j >= 0; --j)
        {
            if (a[j] > currentMax)
                currentMax = a[j];
            maxima.push_front(currentMax);
        }
        int smallestMax = currentMax;
        int end = n - d;
        for (int j = 0; j < end; ++j)
        {
            maxima.pop_front();
            int next = a[j + d];
            for (deque<int>::reverse_iterator ri = maxima.rbegin();
                 ri != maxima.rend() && *ri < next; ++ri)
                *ri = next;
            maxima.push_back(next);
            if (maxima.front() != currentMax)
            {
                currentMax = maxima.front();
                if (currentMax < smallestMax)
                    smallestMax = currentMax;
            }
        }
        cout << smallestMax << endl;
    }
    
    return 0;
}