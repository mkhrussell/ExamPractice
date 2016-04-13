/*

#include <iostream>

#include <cstdio>

using namespace std;

int Data[100];

void print(int N)
{
	for (int i = 0; i < N; i++)
		printf("%d", Data[i]);
	printf("\n");
}

void octal(int N, int i)
{
	if (i == N)
	{
		print(N);
		return;
	}

	for (int j = 0; j < 8; j++)
	{
		Data[i] = j;
		octal(N, i + 1);
	}
}

int main(int argc, char **argv)
{
	int N;
	cin >> N;

	octal(N, 0);

	return 0;
}

*/