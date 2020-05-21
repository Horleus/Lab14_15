#include <iostream>
#include <iomanip>
using namespace std;

const int N = 12;
int main() {
	setlocale(LC_ALL, "Ukrainian");
	int i;
	float T[N] = { 2.1, -6, 3.2, -18, 1.8, 3, 5, -15.5, -2, 5, 8, 6 }; //визначення масиву С
	float min_vid, min_dod;
	min_vid=0;
	min_dod=100;

	cout << "Вхiдний масив:" << endl;
	for (i = 0; i < N; i++)
		cout << T[i] << " ";
	cout << endl;
//	cout << setprecision(10) << setiosflags(ios::fixed | ios::showpoint);

	for (i =0; i<N; i++)
	{
		if ((T[i] < 0) && (T[i] < min_vid))
			min_vid = T[i];
		if ((T[i] > 0) && (T[i] < min_dod))
			min_dod = T[i];
	}

	cout << "Найбільша від'ємна температура " << min_vid << endl;
	cout << "Найменьша додатня температура " << min_dod << endl;

	return 0;
}
