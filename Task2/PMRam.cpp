#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y)
{
    return (y == 0) ? x : gcd(y, x%y);
}

int main() {
    int T;
    cin >> T;
 
     int N;
     while (T--)
     {
         cin >> N;

         vector <int> A(N);
         for (int i = 0; i < N; i++)
             cin >> A[i];

         long long int mn = LLONG_MAX, temp;
         for (int i = 0; i < N; i++)
         {
             for (int j = i+1; j < N; j++)
             {
                 temp = (long long)A[i] * A[j] / gcd(A[i], A[j]);
                 if (temp < mn)
                     mn = temp;
             }
         }

         cout << mn << "\n";
     }   
    
    return 0;
}