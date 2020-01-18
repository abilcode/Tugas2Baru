#include <iostream>
using namespace std;

int mode, i, j, d1, d2;
int arrj[]{}, arr2[]{}, arr3[]{}, arrk[]{}, arrkur[]{};

void show_pers(int a[], int n)
{	
	for (int i = n ; i >= 0 ; i--)
	{	if (i == 0)
			cout << a[0] << endl;
		else	
			if (i == 1)
				cout << a[1] << "x + ";
			else
				if (i == n)
					cout << a[i] <<"x^"<< i <<" + ";
				else
					cout << a[i] << "x^"<< i << " + ";
	}
}


int main ()
{
	cout << "1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Turunan \nPilih operasi : ";
	cin >> mode;
	
	cout << "Masukkan pangkat tertinggi pada polinomial 1 : "; 
	cin >> d1; // Batas pangkat
	int arr1 [d1 + 1] {};
	for ( i = d1; i >= 0; --i){
		cout << "Masukan konstanta pada X^" << i << ":";
		cin >> arr1[i];
	}
	show_pers(arr1, d1);		
	
	cout << "Masukkan pangkat tertinggi pada polinomial 2 : ";
	cin >> d2;
	int arr2 [d2 + 1] {};
		
	for ( i = d2; i >= 0; --i){
		cout << "Masukan konstanta pada X^" << i << ":";
		cin >> arr2[i];
	}

	show_pers(arr2, d2);
					
	switch (mode)
	{
		case 1:
		{	
			if (d1 >= d2)
			{
				int arrj[d1]{};
				for ( i = 0; i <= d1; ++i)
				{
					if ( i <= d2)
					{
						arrj[i] = arr1[i] + arr2[i];
					}
					else
					{
						arrj[i] = arr1[i];
					}	
				}
				cout << "\n";
				cout << "Hasil penjumlahan dari kedua polinomial diatas adalah : " << endl;
				show_pers(arrj, d1);
			}
			else 
			{
				int arrj[d2]{};
				for ( i = 0; i <= d2; ++i)
				{	
					if ( i <= d1)
					{
						arrj[i] = arr1[i] + arr2[i];
					}
					else
					{
						arrj[i] = arr2[i];
					}
				}
				cout << "\n";
				cout << "Hasil penjumlahan dari kedua polinomial diatas adalah : " << endl;
				show_pers(arrj, d2);	
			}
		break;
		}
		
		case 2:
		{
			if (d1 >= d2)
			{
				int arrkur[d1]{};
				for ( i = 0; i <= d1; ++i)
				{
					if ( i <= d2)
					{
						arrkur[i] = arr1[i] - arr2[i];
					}
					else
					{
						arrkur[i] = arr1[i];
					}	
				}
				cout << "\n";
				cout << "Hasil pengurangan dari kedua polinomial diatas adalah : " << endl;
				show_pers(arrkur, d1);			
			}
			else 
			{
				int arrkur[d2]{};
				for ( i = 0; i <= d2; ++i)
				{
					if ( i <= d1)
					{
						arrkur[i] = arr1[i] - arr2[i];
					}
					else
					{
						arrkur[i] = 0 - arr2[i];
					}	
				}
				cout << "\n";
				cout << "Hasil pengurangan dari kedua polinomial diatas adalah : " << endl;
				show_pers(arrkur, d2);		
			}
			break;
		}
		case 3 :
		{
			for(i = 0; i <= d1; i++){
				for(j = 0; j <= d2; j++){
						arrk[i+j] = arrk[i+j] + arr1[i]*arr2[j];
				}
			}
			cout << "\n";
			cout << "Hasil perkalian dari kedua polinomial diatas adalah : " << endl;
			show_pers(arrk, d1+d2);
			break;
		}			

		case 4 :
		{
			cout << "\n";
			cout << "Turunan dari polinomial 1 adalah : " << endl;

			for (i = 0, j = d1 ;  i<= d1, j >= 0; ++i,--j)
			{
				if(j>0 && arr1[i]*j != 0)
				{
					if(j-1==0)
					{
						cout << arr1[i]*j << " ";
					}
					else if (j-1 >1){
						cout <<" "<< arr1[i]*j << " X^" << j-1 << " + " ;
					}
					else 
					{
						cout <<" "<< arr1[i]*j << " X" << " + " ;
					}
				}
				else if (j==0 && arr1[i]*j !=0){
					cout << " " << arr1[i]*j;
				}
				else if (arr1[i]*j==0) 
				{
					continue;
				}
			}
		}
	}
}		
