#include<cstdio>
using namespace std;
#define INF 987654321

int main() {

	int num;
	scanf("%d",&num);
	int sum = 0;
	for (int i = 1; i < num; i++) {
		if (num%i == 0)
			sum += i;
	}

	if (sum < num) {
		printf("%5d  DEFICIENT\n",num);
	}else if (sum == num) {
		printf("%5d  PERFECT\n", num);
	}else
		printf("%5d  ABUNDANT\n", num);
	return 0;
}