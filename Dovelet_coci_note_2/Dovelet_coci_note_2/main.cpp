#include<cstdio>

using namespace std;
#define INF 987654321

int main() {

	int arr[9];
	int cnt1=0,cnt2 = 0;
	for (int i = 1; i <= 8; i++) {
		scanf("%d",&arr[i]);
	}
	
	

	
	int cnt = 0;
	int i = 1, j = 8;;
	while (true) {
		if (arr[i] == i)cnt1++;
		if (arr[i] == j)cnt2++;
		i++;
		j--;
		cnt++;
		if (cnt == 8)break;
	}
	if (cnt1 == 8 && cnt2 == 0) {
		printf("ascending\n");
	}
	else if (cnt1 == 0 && cnt2 == 8) {
		printf("descending\n");
	}
	else  {
		printf("mixed\n");
	}
	
	return 0;
}