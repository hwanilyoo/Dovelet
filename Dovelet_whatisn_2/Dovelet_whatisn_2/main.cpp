#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	int n;
	scanf("%d",&n);
	int cnt = 0;
	for (int i = 1; i <= 5; i++) { //손가락은 5개
		for (int j = 0; j <= i; j++) { //n=3, (1,2) <->(2,1) 같음
			if (i + j == n) {
				cnt++;
			}
		}
	}

	printf("%d\n",cnt);
	return 0;
}