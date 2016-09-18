#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	int N;
	scanf("%d",&N);
	int max, min;
	
	if (N % 2 == 0 && N % 3 == 0) {
		max = N / 2;
		min = N / 3;
	}
	else if (N % 2 == 1 && N % 3 == 0) {
		max = N / 2 + 1;
		min = N / 3;
	}
	else if (N % 2 == 1 && N % 3 != 0) {
		max = N / 2 + 1;
		min = N / 3 + 1;
	}
	else if (N % 2 == 0 && N % 3 != 0) {
		max = N / 2 ;
		min = N / 3 + 1;
	}

	printf("%d %d\n",max,min);
	return 0;
}