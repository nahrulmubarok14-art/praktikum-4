#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int A[4][4] = {
		{1, 0, 2, 0},
		{0, 1, 0, 1},
		{2, 0, 1, 0},
		{0, 2, 0, 1}
	};
	int B[4][4] = {
		{1, 1, 1, 1},
		{1, 1, 1, 1},
		{2, 2, 2, 2},
		{2, 2, 2, 2}
	};
	int HASIL[4][4] = {0};
	cout << "Nama : Nahrul Mubarok" << endl;
	cout << "Nim  : 25104410062" << endl;
	cout << "Prodi : Teknik Informatika" << endl;
	cout << "Tugas praktikum 4" << endl;
	cout << "--- Program perkalian Matriks 4x4 ---" << endl;

	cout << "Matriks A:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(3) << A[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << "Matriks B:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(3) << B[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			HASIL[i][j] = 0;
			for (int k = 0; k < 4; k++) {
				HASIL[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	cout << "\n================================\n" << endl;
	cout << "MATRIKS HASIL PERKALIAN (A x B):" << endl;
	cout << "Matriks A x B:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(5) << HASIL[i][j];
		}
		cout << endl;
	}
	return 0;
}