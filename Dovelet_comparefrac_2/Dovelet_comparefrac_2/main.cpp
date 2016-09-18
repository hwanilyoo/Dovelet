#include<cstdio>

using namespace std;
#define INF987654321

int main() {

	float a, b, c, d;
	int num;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	float res1 = (a / b);
	float res2 = (c / d);
	
	if (res1 > res2) {
		num = 1;
	}
	else if (res1 == res2) {
		num = 0;
	}
	else {
		num = -1;
	}
	printf("%d\n",num);
	return 0;
}