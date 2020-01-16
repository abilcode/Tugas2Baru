#include <iostream>
using namespace std;

int mode, i, j, d1, d2, turunan, derajat;
int main ()
{
	cout << "1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Turunan \nPilih operasi : ";
	cin >> mode;
	
	switch (mode)
	{
		case 1:
		{
			cout << "Masukan derajat polinom 1 :";
			cin >> d1;
			int arr1 [d1 + 1] {};
			
			for ( i = d1, j = d1; i >= 0, j >= 0; --i, --j )
			{
				cout << "Masukan ke-X^" << j << ":";
				cin >> arr1[i];
			}
			
			cout << "Masukan derajat polinom 2 :";
			cin >> d2;
			int arr2 [d2 + 1] {};
			
			for ( i = d2, j = d2; i >= 0, j >= 0; --i, --j )
			{
				cout << "Masukan ke-X^" << j << ":";
				cin >> arr2[i];
			}
			
			if (d1 >= d2)
			{
				int arrj[d1]{};
				for ( i = 0; i <= d1; ++i)
				{
					arrj[i] = arr1[i] + arr2[i];	
				}
				for ( i = d1; i >= 0; --i)
				{
					if ( arrj[i] != 0 )
					{
						if ( i == 1 )
						{
							cout << arrj[1] << "X +";
						}
						else if ( i == 0)
						{
							cout << arrj[0];
						}
						else
						{
							cout << arrj[i] << "X^" << i << " +";
						}
					}
					else 
					{
					}
				}
			}
			else 
			{
				int arrj[d2]{};
				for ( i = 0; i <= d2; ++i)
				{
					arrj[i] = arr1[i] + arr2[i];	
				}
				for ( i = d2; i >= 0; --i)
				{
					if ( i == 1 )
					{
						cout << arrj[1] << "X +";
					}
					else if ( i == 0)
					{
						cout << arrj[0];
					}
					else
					{
						cout << arrj[i] << "X^" << i << " +";
					}
				}	
			}
		break;
		}
		
		case 2:
		{
			cout << "Masukan derajat polinom 1 :";
			cin >> d1;
			int arr1 [d1 + 1] {};
			
			for ( i = d1, j = d1; i >= 0, j >= 0; --i, --j )
			{
				cout << "Masukan ke-X^" << j << ":";
				cin >> arr1[i];
			}
			
			cout << "Masukan derajat polinom 2 :";
			cin >> d2;
			int arr2 [d2 + 1] {};
			
			for ( i = d2, j = d2; i >= 0, j >= 0; --i, --j )
			{
				cout << "Masukan ke-X^" << j << ":";
				cin >> arr2[i];
			}
			
			if (d1 >= d2)
			{
				int arrj[d1]{};
				for ( i = 0; i <= d1; ++i)
				{
					arrj[i] = arr1[i] - arr2[i];	
				}
				for ( i = d1; i >= 0; --i)
				{
					if ( i == 1 )
					{
						cout << arrj[1] << "X -";
					}
					else if ( i == 0)
					{
						cout << arrj[0];
					}
					else
					{
						cout << arrj[i] << "X^" << i << " -";
					}
				}	
			}
			else 
			{
				int arrj[d2]{};
				for ( i = 0; i <= d2; ++i)
				{
					arrj[i] = arr1[i] - arr2[i];	
				}
				for ( i = d2; i >= 0; --i)
				{
					if ( i == 1 )
					{
						cout << arrj[1] << "X -";
					}
					else if ( i == 0)
					{
						cout << arrj[0];
					}
					else
					{
						cout << arrj[i] << "X^" << i << " -";
					}
				}	
			}
		break;
		}
		case 4 :
		{
			cout << "Mau Turunan ke Berapa (1/2) : ";
			cin >> turunan;
			cout << "Masukan derajat : ";
			cin >> derajat;
			int arr[derajat+1]{};
			for (i = 0, j = derajat ; i <= derajat, j >= 0 ; ++i, --j )
			{
				cout << "Masukan ke-X^"<<j<< " : ";
				cin >> arr[i];
			}
			for(i = 0, j = derajat ;  i <= derajat, j >= 0; ++i,--j)
			{
				if(i == 0)
				{
					cout << arr[i] << " X^" << j;
				}
				if (j != 0 && arr[i] != 0)
				{
					cout << " + " << arr[i] << " X^" << j;
				}
				else if (j == 0 && arr[i] != 0)
				{
					cout << " "<< arr[i] ;
				}
				else
				{
					continue;
				}
			}
			cout<<endl;

			switch (turunan)
			{
				case 1  :
				for (i = 0, j = derajat ;  i<= derajat, j >= 0; ++i,--j)
				{
					if(j>0 && arr[i]*j != 0)
					{
						if(j-1==0)
						{
							cout << arr[i]*j << " ";
						}
						else if (j-1 >1)
						{
							cout <<" "<< arr[i]*j << " X^" << j-1 << " + " ;
						}
						else 
						{
							cout <<" "<< arr[i]*j << " X" << " + " ;
						}
					}
					else if (j==0 && arr[i]*j !=0)
					{
						cout << " " << arr[i]*j;
					}
					else if (arr[i]*j==0) 
					{
						continue;
					}
				}
			}

		}
		
	}
}
	
