/*
#include <iostream>
#include <cstdio>

using namespace std;

int A[100], N;

void readSet()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
}

void printSet()
{
	bool flag = false;
	printf("{");
	for (int i = 0; i < N; i++)
	{
		if (flag) { printf(", "); }
		else { flag = true; }

		printf("%d", A[i]);
	}
	printf("}\n");
}

int main()
{
	readSet();
	printSet();

	return 0;
}
*/