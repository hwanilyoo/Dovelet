#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	int a, b;
	scanf("%d %d",&a,&b);
	if (a == 0) {
		printf("%d !| %d\n", a, b);
		return 0;
	}
	if(b%a != 0)
		printf("%d !| %d\n", a, b);
	else if (b%a == 0)
		printf("%d | %d\n", a, b);
	
	
	return 0;
}