#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int limit;
	cout << "�п�J�ƾڶq" << endl;
	cin >> limit;
	int array[100];
	//��J��Ʀr��
	cout << "�п�J��ư}�C����" << endl;
	for (int i = 0; i < limit; i++)
	{
		cin >> array[i];
		cout << "��" << i << "�Ӥ�����J����" << endl;
	}
	//best���̤j��
	int sum = 0;
	int best = 0;
	for (int j = 0; j < limit; j++)
	{
		sum = array[j];
		for (int k = j + 1; k < limit; k++)
		{
			sum+=array[k];
			if (sum > best)
				best = sum;
		}
	}
	cout << best << endl;
	system("PAUSE");
	return 0;
}