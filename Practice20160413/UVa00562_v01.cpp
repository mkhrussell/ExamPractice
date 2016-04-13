/*
#include <iostream>
#include <cstdio>

using namespace std;

const int SET_SIZE = 101;

int minDiff = 999999999;
int closestSum;
int superSum, maxSubsetSum;
int binaryFlagSet[SET_SIZE];
int superSet[SET_SIZE];

int myAbs(int num)
{
	return num >= 0 ? num : -num;
}

void init()
{
	superSum = 0;
	maxSubsetSum = 0;
	minDiff = 999999999;

	for (int i = 0; i < SET_SIZE; i++)
	{
		binaryFlagSet[i] = 0;
	}
}

void print(int N)
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		if (1 == binaryFlagSet[i])
		{
			sum += superSet[i];
		}
	}

	if (sum > maxSubsetSum)
		return;

	if (sum <= maxSubsetSum && (maxSubsetSum - sum) <= minDiff)
	{
		minDiff = maxSubsetSum - sum;
		closestSum = sum;
	}
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
		binaryFlagSet[i] = j;
		binary(N, i + 1);
	}
}

int main(int argc, char **argv)
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int N, C;
	scanf("%d", &C);
	while (C--)
	{
		init(); // Init

		scanf("%d", &N);
		for (int i = N - 1; i >= 0; i--)
		{
			scanf("%d", &superSet[i]);
			superSum += superSet[i];
		}

		if (superSum % 2 == 0)
			maxSubsetSum = superSum / 2;
		else
			maxSubsetSum = (superSum + 1) / 2;

		binary(N, 0);

		printf("%d\n", myAbs((superSum - closestSum) - closestSum));
	}

	return 0;
}
*/