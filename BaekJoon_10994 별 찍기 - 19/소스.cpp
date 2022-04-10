#include <iostream>
using namespace std;

char place[400][400];
void star(int n, int index)
{
	if (n <= 0)
		return;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
				place[i + index][j + index] = '*';
			else
				place[i + index][j + index] = ' ';
		}
	}
	star(n - 4, index + 2);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	n = (n - 1) * 4 + 1;

	star(n, 0);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << place[i][j];
		}
		cout << '\n';
	}

	return 0;
}