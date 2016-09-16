#include<cstdio>
#include<math.h>
using namespace std;
#define INF 987654321

int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	double x =3.14159*a + 3.14159*b+ sqrt(a*a + a*a) + sqrt(b*b + b*b);
	printf("%.3lf\n",x);
	return 0;
}