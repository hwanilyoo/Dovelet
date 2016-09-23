#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
#define INF 987654321
priority_queue<int> Q;
int main() {
	int arr[3];
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	for (int i = 0; i < 3; i++)
		Q.push(arr[i]);

	int res[3];
	for (int i = 0; i < 3; i++) {
		res[i] = Q.top();
		Q.pop();
	}

	if (res[0] * res[0] > res[1] * res[1] + res[2] * res[2])
		printf("obtuse\n");

	else if (res[0] * res[0] < res[1] * res[1] + res[2] * res[2])
		printf("acute\n");

	else
		printf("right\n");
	
	

	return 0;
}