#include<iostream>
using namespace std;

int main()
{
	bool T = true;
	int s1 = 0;
	int N = 0;
	int s2 = 0;
	int s = 0;
	cin >> N;

	//int * A = new int(N);
	int A[100000];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		if (A[i] >= 0)
			T = false;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = N - 1; j >= i; j--)
		{
			int temp = 0;
			for (int k = 0; k <= j - i; k++)
				temp += A[k + i];
			if (temp > s)
				s = temp;

		}
	}


	if (T)
		cout << 0;
	else
		cout << s;
	//delete[] A;

	return 0;
}