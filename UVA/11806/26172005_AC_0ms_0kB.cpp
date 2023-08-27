#include<iostream>
using namespace std;
const long long mod =1000007;
const int MAX = 500;
long long num[MAX][MAX];
void zh()
{
	for (long long i = 0; i < MAX; i++) {
		num[i][0] = num[i][i] = 1;
		for (long long j = 1; j < i; j++) {
			num[i][j] = (num[i - 1][j - 1] + num[i - 1][j]) % mod;
		}
	}
 }
int main()
{
	int t, m, n,k;
	cin >> t;
	zh();
	for (int i = 1; i <= t; i++)
	{
		long long sum = 0;
		cin >> n>> m>>k;
		cout << "Case " << i << ": ";
		if (k > m*n)
		{
			cout << sum << endl;
			continue;
		}
			sum= (num[m*n][k]-(2 * (num[(n - 1)*m][k] + num[n*(m - 1)][k]) - (num[(n - 2)*m][k] + num[n*(m - 2)][k]) + 2 * (num[(n - 1)*(m - 2)][k] + num[(n - 2)*(m - 1)][k]) - num[(n - 2)*(m - 2)][k]-4 * num[(n - 1)*(m - 1)][k]));
			while (sum < 0)
				sum += mod;
			sum %= mod;
			cout << sum << endl;
    
	}
	return 0;
}