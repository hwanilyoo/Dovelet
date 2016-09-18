#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	int a;
	float b,res;

	scanf("%d %f",&a,&b);
	if (a % 5 == 0 && a+0.5 <= b) {
		res = b - ((float)a + 0.5);
	}
	else if (a % 5 != 0) {
		res = b;
	}
	else {
		res = b;
	}
	printf("%.2f\n",res);
	return 0;
}