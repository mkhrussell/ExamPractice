#include <iostream>
#include <cstdio>

using namespace std;

int Data[100], superSet[100];

void print(int N)
{
	bool flag = false;
	
	//for (int i = 0; i < N; i++)
	//	printf("%d", Data[i]);
	//printf("\n");

	printf("{");
	for (int i = 0; i < N; i++)
	{
		if (1 == Data[i])
		{
			if (flag) { printf(", "); }
			else { flag = true; }

			printf("%d", superSet[i]);
		}
		//else
		//	printf(" ");
	}
	//printf("\n\n");
	printf("}\n");
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
	for (int i = N - 1; i >= 0; i--)
	{
		cin >> superSet[i];
	}

	binary(N, 0);	

	return 0;
}