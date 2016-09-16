#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	float computer, printer, router;
	scanf("%f %f %f",&computer,&printer,&router);
	int result = (((1.5 + 1.0)*computer) + 2.0*printer + 0.5*router) * 2;

	if (result % 10 != 0) {
		int modular = result % 10;
		result = result + (10 - modular);
	}
	printf("%d amperes\n",result);
	return 0;
}