/*

#include <iostream>

#include <cstdio>

using namespace std;

int Data[100];

void print(int N)
{
	for (int i = 0; i < N; i++)
	{
		if(Data[i] < 10)
			printf("%d", Data[i]);
		else
			printf("%c", Data[i] + 55); // ASCII
	}

	printf("\n");
}

void hexa(int N, int i)
{
	if (i == N)
	{
		print(N);
		return;
	}

	for (int j = 0; j < 16; j++)
	{
		Data[i] = j;
		hexa(N, i + 1);
	}
}

int main(int argc, char **argv)
{
	int N;
	cin >> N;

	hexa(N, 0);

	return 0;
}

*/