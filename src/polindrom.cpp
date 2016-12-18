#include"polindrom.h"
#include <queue>;
int* sred(int*a, int k, int n) {
	if ((k > 0) && (n > 0) && (k <= n) && (a != 0)) {
		std::queue<int> q;
		int *res = new int[n - k + 1];
		int sum = 0;
		int old = 0;
		for (int i = 0; i < k; ++i) {
			q.push(a[i]);
		}
		for (int i = 0; i < n - k + 1; i++) {
			for (int j = 0; j < k; j++) {
				sum += q.front(); 
				old = q.front();
				q.push(old);
				q.pop();
			}
			q.push(a[i + k]);
			q.pop();
			res[i] = sum / k;
			sum = 0;
		}
		return res;
	}
	else {
		throw 1;
	}
}