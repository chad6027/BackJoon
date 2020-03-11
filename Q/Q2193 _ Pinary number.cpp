// Q2193 ��ģ��

// �ܼ��ϴ�. DP��.
// n-1��°�� 0���� ������ ���� 1�� ������ ��츦 ������.
// 0���� ������ 1�� ������ �ڿ� 0�� ���� �� �����Ƿ�
// n��° 0���� ������ ���� n-1��°�� �� ��츦 ���� ���� ����.
// 0���� ������ ��쿡�� �ڿ� 1�� ���� �� �����Ǹ�
// n��° 1�� ������ ���� n-1��°�� 0���� ������ ����� ���� ����.

// �׷��� ����غ��� ��? �Ǻ���ġ ������ ��Ȯ�� ��ġ�Ѵ�.
// �� ����� �߰��ϰ� �ų��� int������ �ڵ��ϸ� INT_MAX���� �ѱ�� ��찡 �߻��Ѵ�.
// �װ͵� �𸣰� �����ߴٰ� Ʋ�����ȴ�.
// long long���� ���� �ٷ� ����.

#include <iostream>
using namespace std;
long long b[91] = { 0, };
int main() {
	int n;
	cin >> n;
	b[1] = 1; b[2] = 1;
	for (int i = 3; i <= n; i++) {
		b[i] = b[i - 1] + b[i - 2];
	}
	cout << b[n];

	return 0;
}