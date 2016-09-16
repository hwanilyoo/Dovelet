#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	/*  
		제곱꼴의 형태는 약수의 개수가 홀수다
		ex) 2 : 1,2 
		    3 : 1,3
			4 : 1,2,4 <-홀수
			5 : 1,5
			21: 1,3,7,21 
			25: 1,5,25 <-홀수
	*/

	int a, b;
	int cnt=0;
	scanf("%d %d",&a,&b);
	int total = b - a + 1;
	for (int i = 1; ; i++) {
		
		int sq=i*i;
		
		if (a <= sq && sq <= b) {
			++cnt; 
		}
		if(sq>b)
			break;
	}
	
	
	printf("%d\n",total-cnt);
	return 0;
}