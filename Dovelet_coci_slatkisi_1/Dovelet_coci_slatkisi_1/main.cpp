#include<cstdio>
#include<math.h>
using namespace std;
#define INF 987654321

int main() {
	int c, k,money=1,result;
	float a=1;
	scanf("%d %d",&c,&k);

	for (int i = 0; i < k; i++) {
		money *= 10;
	}
	
	int modular = c%money;

	if (modular >= money / 2)
		result = (c - modular) + money;
	else
		result = c-modular;

	printf("%d\n",result);
	return 0;
}