#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int X_MAX = 105;

double solve(int N, int X)
{
    double res = pow(1.0/X, N);
    for (int i = 2; i <= X; i++)
    {
        res += pow((double)i/X, N)*i - (pow((double)(i-1)/X, N))*i;
    }
    
    return res;
}

int main() {
    int T;
    cin >> T;
    
    int N, X;
    while (T--)
    {
        cin >> N >> X;
        
        cout << setprecision(4) << fixed << solve(N, X) << "\n";
    }
    return 0;
}

/*
Total = X^N
With 1: 1 => (Divide by Total) 1/X^N
With 2: 2^N - 1 => (Divide by Total) (2/X)^N - (1/X)^N
With 3: 3^N - with2 - with1 => (Divide by Total) (3/X)^N - (2/X)^N
With 4: => (Divide by Total) (4/X)^N - (3/X)^N
.
.
.
With X:  1 - ((X-1)/X)^N
*/