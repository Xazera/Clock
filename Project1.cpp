#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;




void Display_Time() {
	int hr = 0, min = 0, sec = 0;
	int hr2 = 0;
	int userInp = 0;






	while (true) {


		if (userInp == 0) {

			cin >> userInp;

			if (userInp == 1) {
				hr++;
				userInp = 0;
			}

			if (userInp == 2) {
				min++;
				userInp = 0;
			}

			if (userInp == 3) {
				sec++;
				userInp = 0;
			}

			if (userInp == 4) {
				exit(0);
			}

			else;






			hr2 = hr;

			if (hr > 12) {
				hr2 = hr - 12;
			}



			Sleep(1000);
			system("cls");
			cout << "*************************************************" << endl;
			cout << "*	12-Hour Clock	*  *	24-Hour Clock	*" << endl;
			cout << "*	" << hr2 << " : " << min << " : " << sec << "	*  *	" << hr << " : " << min << " : " << sec << "	*" << endl;
			cout << "*************************************************" << endl;

			cout << "	   ***************************" << endl;
			cout << "	   * 1-Add one hour          *" << endl;
			cout << "	   * 2-Add one minute        *" << endl;
			cout << "	   * 3-Add one second        *" << endl;
			cout << "	   * 4- Exit Program         *" << endl;
			cout << "	   ***************************" << endl;

			sec++;

			if (sec == 60) {
				sec = 0;
				min++;
				if (min == 60) {
					hr++;
					min = 0;
					if (hr == 24) {
						hr = 0;
						{


						}
					}

				}
			}


		}

	}

}







int main() {


	int hr = 0, min = 0, sec = 0;
	int hr2 = 0;
	int userInp = 0;



	cout << "*************************************************" << endl;
	cout << "*	12-Hour Clock	*  *	24-Hour Clock	*" << endl;
	cout << "*	" << hr2 << " : " << min << " : " << sec << "	*  *	" << hr << " : " << min << " : " << sec << "	*" << endl;
	cout << "*************************************************" << endl;

	cout << "	   ***************************" << endl;
	cout << "	   * 1-Add one hour          *" << endl;
	cout << "	   * 2-Add one minute        *" << endl;
	cout << "	   * 3-Add one second        *" << endl;
	cout << "	   * 4- Exit Program         *" << endl;
	cout << "	   ***************************" << endl;

	Display_Time();



}

