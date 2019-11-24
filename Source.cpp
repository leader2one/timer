#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <time.h>
#include <conio.h>
using namespace std;
int h = 0;
int m = 0;
int s = 0;
void clockk()
{
	system("CLS");
	cout << setfill(' ') << setw(20) << " ---------------- " << endl;
	cout << setfill(' ') << setw(7);
	cout << "|" << setfill('0') << setw(2) << h << ":";
	cout << setfill('0') << setw(2) << m << ":";
	cout << setfill('0') << setw(2) << s << "|" << endl;
	cout << setfill(' ') << setw(20) << " ---------------- " << endl;
	HWND wh = GetConsoleWindow();


	MoveWindow(wh, 1100, 10, 300, 150, TRUE);
}
void timer()
{
	while (1){
		clockk();
		Sleep(1000);
		s++;
		if (s == 60){
			m++;
			if (m == 60){
				h++; m = 0;
			}
			s = 0;
		}
	}

}
int main()
{
	timer();

	system("pause");
	return 0;
}