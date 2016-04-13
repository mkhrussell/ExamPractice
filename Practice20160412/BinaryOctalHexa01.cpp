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

void binary(int N, int i)
{
	if (i == N)
	{
		print(N);
		return;
	}

	for (int j = 0; j < 2; j++)
	{
		Data[i] = j;
		binary(N, i + 1);
	}
}

int main(int argc, char **argv)
{
	int N;
	cin >> N;	
	
	binary(N, 0);

	return 0;
}

*/