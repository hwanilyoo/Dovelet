#include<cstdio>

using namespace std;
#define INF 987654231

int main() {
	double input;
	double penny = 0;
	for (int i = 1; i <=12; i++){
		scanf("%lf",&input);
		penny += input;
	}

	double dollar = (penny / 12) ;
	printf("$%0.2lf\n",dollar);

	
	return 0;
}