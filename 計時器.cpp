#include <iostream>
#include<iomanip>
#include<ctime>
using namespace std;
int main(int argc, char** argv)
{
	cout.setf(ios::fixed | ios::right);
	cout.fill('0');
	//�ϥΪ̪�����J��e�ɶ�
	int a, b, c;
	cout << "�Ф��O��J��e���p�ɼơA�����ơA���" << endl;
	cin >> a >> b >> c;
	while (true)
	{
		for (int hr = a; hr < 24; hr++)
		{
			for (int min = b; min < 59; min++)
			{
				for (int sec = c; sec < 59; sec++)
				{
					cout << setw(2) << hr << ':' << setw(2) <<min<< ':' << setw(2) << sec << ' ';
					cout << '\r';
					unsigned int StartTime = time(NULL) + 1;
					while (time(0) < StartTime);
				}
			}
		}
	}
	system("PAUSE");
	return 0;
}