/*
Author: architkl
Language: C++ 11
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <climits>
#include <string>
#include <math.h>

using namespace std;

#define pb push_back
#define mp make_pair

typedef pair <int, int> pii;
typedef unsigned long long ull;

const int K = 1e9 + 7;
const int N_MAX = 1e5+5;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	int N;

	while (T--)
	{
		cin >> N;

		vector <int> A(N), freq(N_MAX);
		int odd = 0, even = 0;

		for (int i = 0; i < N; i++)
		{
			cin >> A[i];

			if (freq[A[i]])
				continue;

			freq[A[i]]++;
			odd += A[i]%2;
			even += !(A[i]%2);
		}

		long long int res = 1;
		for (int i = 0; i < odd-1; i++)
		{
			res *= 2;
			res %= K;
		}

		for (int i = 0; i < even; i++)
		{
			res *= 2;
			res %= K;
		}

		cout << res << "\n";
	}

	return 0;
}