#include <iostream>
using namespace std;

int i,j,k,l,m,n;
int main(int argc, char const *argv[])
{
	cout << "Perkalian"<< endl;
	cout << "Masukan derajat Persamaan 1 : "; //Memasukan Nilai Derajat Persamaan 1
	cin  >> k; // banyak ruang array
	int arr1[k+1]{}; //inisiasi Array
	for (i= 0; i<=k; ++i) //Looping untuk input Array
	{
		cout << "Masukan X^"<< k-i << " : "; 
		cin >> arr1[i];
	}
	for (i= 0; i<=k; ++i)
	{
		if (arr1[i] != 0)
		{
			if(arr1[i]!= 1)
			{	
				if(i == 0)
				{
					cout << arr1[i] << "X^" << k-i;
				}
				else if (k-i ==0)
				{
					cout << " + " << arr1[i];
				}
				else 
				{
					cout << " + " << arr1[i] << "X^" << k-i;
				}
			}
			else
			{
			if(i == 0)
				{
					cout << "X^" << k-i;
				}
				else if (k-i ==0)
				{
					cout << " + " << arr1[i];
				}
				else 
				{
					cout << " + " << "X^" << k-i;
				}	
			}	
		}
		else
		{
			continue;
		}
	}
	//Yang kedua

	cout << endl;
	cout << "Masukan derajat Persamaan 2 : "; //Memasukan Nilai Derajat Persamaan 1
	cin  >> l; //banyak ruang array
	int arr2[l+1]{}; //inisiasi Array
	for (j= 0; j<=l; ++j) //Looping untuk input Array
	{
		cout << "Masukan X^"<< l-j << " : "; 
		cin >> arr2[j];
	}
	for (j= 0; j<=l; ++j)
	{
		if (arr2[j] != 0)
		{
			if(arr2[j]!= 1)
			{	
				if(j == 0)
				{
					cout << arr2[j] << "X^" << l-j;
				}
				else if (l-j ==0)
				{
					cout << " + " << arr2[j];
				}
				else 
				{
					cout << " + " << arr2[j] << "X^" << l-j;
				}
			}
			else
			{
			if(j == 0)
				{
					cout << "X^" << l-j;
				}
				else if (l-j ==0)
				{
					cout << " + " << arr2[j];
				}
				else 
				{
					cout << " + " << "X^" << l-j;
				}	
			}	
		}
		else
		{
			continue;
		}
	
	}
	cout << endl;
	int n = k+l;
	int arr3[n+1]{};
	for (m = 0; m<=n;++m)
	{
		for (i = 0; i<=k;++i)
	{
			for (j = 0; j<=l;++j)
		{
			if (n-m == k+l-i-j)
			{
				arr3[m] = arr1[i] * arr2[j];
				cout << arr3[m] << "X^"<< n-m <<" + " ;
			}
			else
			{
				continue;
			}

		}	
	
	}
	
	}
	
	return 0;
}