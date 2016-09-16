#include<cstdio>
#include<math.h>
using namespace std;
#define INF 987654321
#define M_PI acos(-1)
double radian(double angle);
int main() {
	double r;
	double n;
	
	scanf("%lf %lf",&r,&n);
	double angle = 360 / n;
	double rad = radian(angle);
	double s=(n * r * r * sin(rad)) / 2;
	
	printf("%.3lf\n", s);
	return 0;
}

double radian(double angle) {
	double rad = angle* M_PI / 180;
	return rad;
}