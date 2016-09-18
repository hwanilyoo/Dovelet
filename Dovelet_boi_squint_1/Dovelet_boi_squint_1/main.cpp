#include<cstdio>
#include<math.h>
using namespace std;
#define INF 987654321

int main() {
	double n;
	scanf("%lf",&n);
	
	printf("%lld\n",(unsigned long long)(ceil(sqrt(n))));

	return 0;
}