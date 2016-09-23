#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if (a == c && b == d)
		printf("many\n");
	else if (a == c && b != d)
		printf("none\n");
	else
		printf("%.3f\n",(float)(d-b)/(a-c));
	return 0;

}