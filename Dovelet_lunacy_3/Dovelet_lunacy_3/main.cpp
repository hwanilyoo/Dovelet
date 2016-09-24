#include<cstdio>
using namespace std;
int main() {
	float a;
	scanf("%f",&a);
	while (a != -1.0) {
		printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n",a,a*0.167);
		scanf("%f", &a);
	}
	return 0;
}