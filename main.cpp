#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long n, m, i, j, kostik;
	cin >> n >> m;
	vector < long long > plot, mesk;

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			long long x;
			cin >> x;
			plot.push_back(x);
		}
	cin >> kostik;
	for (i = 0; i < kostik; i++)
	{
		long long x;
		cin >> x;
		mesk.push_back(x);
	}
	sort(plot.begin(), plot.end());
	sort(mesk.begin(), mesk.end());

	kostik = 0;
	i = plot.size() - 1;
	j = mesk.size() - 1;
	while ((i + 1) * (j + 1) > 0)
	{
		if (plot[i] >= mesk[j])
		{
			kostik++;
			i--;
			j--;
		}
		else
			j--;
	}
	cout << kostik << endl;
}