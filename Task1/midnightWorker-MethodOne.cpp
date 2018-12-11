#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int v, int k)
{
    int res = v;
    
    for (int i = 1; v/(int)pow(k, i) != 0; i++)
        res += v/(int)pow(k, i);
    
    return res;
}

int b_search(int n, int k)
{
    int low = 0, high = n, mid;
    
    while (low < high)
    {
        mid = (low + high) / 2;
        
        if (sum(mid, k) >= n)
            high = mid-1;
        
        else
            low = mid+1;
    }
    
    if (sum(high, k) < n)
        return high+1;
    
    return high;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    cout << b_search(n, k) << "\n";
    return 0;
}