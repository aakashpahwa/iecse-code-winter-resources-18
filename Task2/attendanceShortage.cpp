#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    
    int P, Q;
    while (T--)
    {
        cin >> P >> Q;
        
        (3*P - 4*Q) < 0 ? cout << "0\n" : cout << (3*P - 4*Q) << "\n";
    }
    return 0;
}
/*
x = no. of additional classes
(Q+x) / (P + x) = 0.75
(Q+x) = 0.75P + 0.75x
0.25x = 0.75P - Q
x = 3P - 4Q
*/