#include <iostream>
#include <string>
using namespace std;
int reCount;

void recursion(int num) {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	int i = num;
	string line = "";
	while (i--) {
		line += "____";
	}
	cout << line << "\"����Լ��� ������?\"\n";

	if (num == reCount) {
		cout << line << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
	}
	else {
		cout << line << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n" << line << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n" << line << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		recursion(num + 1);
	}
	cout << line << "��� �亯�Ͽ���.\n";
	return;
}


int main() {

	cin >> reCount;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recursion(0);

}