#include<cstdio>

using namespace std;
#define INF 987654321

int main() {
	/*  
		�������� ���´� ����� ������ Ȧ����
		ex) 2 : 1,2 
		    3 : 1,3
			4 : 1,2,4 <-Ȧ��
			5 : 1,5
			21: 1,3,7,21 
			25: 1,5,25 <-Ȧ��
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