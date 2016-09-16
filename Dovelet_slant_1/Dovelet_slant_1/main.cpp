#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	int x1, x2;
	int y1, y2;
	int delta_x, delta_y;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);

	if (x1 == y1 && x2 == y2) {
		printf("1 0\n");
		return 0;
	}
	

	delta_x = x2 - x1;
	delta_y = y2 - y1;
	
	int result1 = delta_y / delta_x;

	int result2 = y2 - (result1*x2);
	int result3 = y1 - (result1*x1);
	if (result2 != result3) {
		printf("%d %d\n", 0, 0);
	}
	printf("%d %d\n",result1,result2);
	return 0;
}