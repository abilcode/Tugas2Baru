#include <iostream>
#include <array>

using namespace std;

void show_pers(int a[], int n)
{
	for (int i = 0 ; i <= n ; i++)
	{	if (i == 0)
			cout << a[0] <<" + ";
		else	
			if (i == 1)
				cout << a[1] << " x + ";
			else
				if (i == n)
					cout << a[i] <<" x^"<< i << endl;
				else
					cout << a[i] << " x^"<< i << " + ";
	}
}

int main()
{

	int M, N, k, i, j;
	int konstanta_new[1000], konstanta[1000], konstanta2[1000];

	// array < int, 1000 > pangkat_new;
	// array < int, 1000 > konstanta;
	// array <int, 1000> konstanta2;
	// array < int, 1000 > konstanta_new;
	
	for(i = 0; i<= 1000; i++){
		konstanta_new[i] = 0;
	}

	// Persamaan linear pertama
	// Memasukkan banyaknya pangkat
	cout << "Masukkan pangkat tertinggi pada polinomial 1 : ";
	cin >> M;

	// Memasukkan konstanta
	for(i = 0; i <= M; i++){
		cout << "Masukkan konstanta pada pangkat - " << i << " : ";
		cin >> konstanta[i];

	}

	// Ekspresi persamaan linear
	show_pers(konstanta[i], M)

	// Persamaan linear kedua
	// Memasukkan banyaknya pangkat
	cout << "Masukkan pangkat tertinggi pada polinomial 2 : ";
	cin >> N;

	// Memasukkan konstanta
	for(i = 0; i <= N; i++){
		cout << "Masukkan konstanta pada pangkat - " << i << " : ";
		cin >> konstanta2[i];

	}
	// perkalian polinom
	for(i = 0; i <= M; i++){
		for(j = 0; j <= N; j++){
			konstanta_new[i+j] = konstanta_new[i+j] + konstanta[i]*konstanta2[j];

		}
	}
	cout << "Hasil perkalian : " << endl;

	show(konstanta_new, M+N);
	
	return 0;


}	