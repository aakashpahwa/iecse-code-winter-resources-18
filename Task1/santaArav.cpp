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

void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int T;
	cin >> T;

	int N, Q;
	string S;
	for (int i = 0; i < T; i++)
	{
		cin >> N >> Q;
		//cin.ignore();
		cin >> S;

		int a, b, cnt, temp;

		for (int j = 0; j < Q; j++)
		{
			cin >> a >> b;

			a--;
			b--;

			if (a > b)
				swap(a, b);

			cnt = 0;
			for (int k = a+1; k <= b; k++)
				if (S[k-1] != S[k])
					cnt++;
			
			temp = 0;
			for (int k = (a-1+N)%N; k != b; k = (k-1+N)%N)
				if (S[k] != S[(k+1)%N])
					temp++;

			if (S[b] != S[(b+1)%N])
				temp++;

			cout << min(temp, cnt) << "\n";
		}
	}

	return 0;
}