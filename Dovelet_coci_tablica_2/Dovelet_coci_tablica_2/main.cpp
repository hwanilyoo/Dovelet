#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	float res[5];
	int cnt = 0;
	float a, b, c, d;
	scanf("%f %f %f %f",&a,&b,&c,&d);

	res[1] = a / c + b / d;
	res[2] = c / d + a / b;
	res[3] = d / b + c / a;
	res[4] = b / a + d / c;
	float max = res[1];
	for (int i = 2; i <= 4; i++) {
		if (res[1] < res[i]){
			res[1] = res[i];
			cnt = i - 1;
		}
			
	}

	printf("%d\n",cnt);
	return 0;
}