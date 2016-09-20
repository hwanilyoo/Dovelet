#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);

	int num1 = b - a;
	int num2 = c - b;

	if (num1 > num2)
		printf("%d\n", num1 - 1);
	else
		printf("%d\n", num2 - 1);

	return 0;
}