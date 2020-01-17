#include <iostream>
using namespace std;

int mode, i, j, d1, d2;
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
					if ( i <= d2)
					{
						arrj[i] = arr1[i] + arr2[i];
					}
					else
					{
						arrj[i] = arr1[i];
					}	
				}
				for ( i = d1; i >= 0; --i)
				{
					if ( arrj[i] != 0 )
					{
						if ( i == d1)
						{
							cout << arrj[i] << "X^" << i;
						}
						else if ( i == 1 )
						{
							if (arrj[i+1] == 0)
							{
							cout << arrj[i] << "X";
							}
							else
							{
								cout << " +" << arrj[i] << "X";
							}
						}
						else if ( i == 0)
						{
							if (arrj[i+1] == 0)
							{
								cout << arrj[0] ;
							}
							else
							{
								cout << " +" << arrj[0];
							}
							
						}
						else
						{
							if (arrj[i+1] == 0)
							{
								cout << arrj[i] << "X^" << i;
							}
							else
							{
								cout << " +" << arrj[i] << "X^" << i;
							}
						}
					}
					else 
					{
						continue ;
					}
				}
			}
			else 
			{
				int arrj[d2]{};
				for ( i = 0; i <= d2; ++i)
				if ( i <= d1)
					{
						arrj[i] = arr1[i] + arr2[i];
					}
					else
					{
						arrj[i] = arr2[i];
					}
				for ( i = d2; i >= 0; --i)
				{
					if ( arrj[i] != 0 )
					{
						if ( i == d2)
						{
							cout << arrj[i] << "X^" << i;
						}
						else if ( i == 1 )
						{
							if (arrj[i+1] == 0)
							{
							cout << arrj[i] << "X";
							}
							else
							{
								cout << " +" << arrj[i] << "X";
							}
						}
						else if ( i == 0)
						{
							if (arrj[i+1] == 0)
							{
								cout << arrj[0] ;
							}
							else
							{
								cout << " +" << arrj[0];
							}
							
						}
						else
						{
							if (arrj[i+1] == 0)
							{
								cout << arrj[i] << "X^" << i;
							}
							else
							{
								cout << " +" << arrj[i] << "X^" << i;
							}
						}
					}
					else 
					{
						continue ;
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
					if ( i <= d2)
					{
						arrj[i] = arr1[i] - arr2[i];
					}
					else
					{
						arrj[i] = arr1[i];
					}	
				}
				
				for ( i = d1; i >= 0; --i)
				{
					if ( arrj[i] != 0 )
					{
						if ( i == d1)
						{
							cout << arrj[i] << "X^" << i << " ";
						}
						else if ( i == 1 )
						{
							if (arrj[i+1] == 0)
							{
							cout << arrj[i] << "X ";
							}
							else if (arrj[i] > 0)
							{
								cout << " +" << arrj[i] << "X ";
							}
							else
							{
								cout << arrj[i] << "X ";
							}
						}
						else if ( i == 0)
						{
							if (arrj[i+1] == 0)
							{
								cout << arrj[0] ;
							}
							else if (arrj[i] > 0)
							{
								cout << " +" << arrj[i] ;
							}
							else
							{
								cout << arrj[i];
							}
							
						}
						else
						{
							if (arrj[i+1] == 0)
							{
								cout << arrj[i] << "X^" << i << " ";
							}
							else if (arrj[i] > 0)
							{
								cout << " +" << arrj[i] << "X^" << i << " ";
							}
							else
							{
								cout << arrj[i] << "X^" << i;
							}
						}
					}
					else 
					{
						continue ;
					}
				}	
			}
			else 
			{
				int arrj[d2]{};
				for ( i = 0; i <= d2; ++i)
				{
					if ( i <= d1)
					{
						arrj[i] = arr1[i] - arr2[i];
					}
					else
					{
						arrj[i] = 0 - arr2[i];
					}	
				}
				for ( i = d2; i >= 0; --i)
				{
					if ( arrj[i] != 0 )
					{
						if ( i == d2)
						{
							cout << arrj[i] << "X^" << i << " ";
						}
						else if ( i == 1 )
						{
							if (arrj[i+1] == 0)
							{
							cout << arrj[i] << "X ";
							}
							else if (arrj[i] > 0)
							{
								cout << " +" << arrj[i] << "X ";
							}
							else
							{
								cout << arrj[i] << "X ";
							}
						}
						else if ( i == 0)
						{
							if (arrj[i+1] == 0)
							{
								cout << arrj[0] ;
							}
							else if (arrj[i] > 0)
							{
								cout << " +" << arrj[i] ;
							}
							else
							{
								cout << arrj[i];
							}
							
						}
						else
						{
							if (arrj[i+1] == 0)
							{
								cout << arrj[i] << "X^" << i << " ";
							}
							else if (arrj[i] > 0)
							{
								cout << " +" << arrj[i] << "X^" << i << " ";
							}
							else
							{
								cout << arrj[i] << "X^" << i;
							}
						}
					}
					else 
					{
						continue ;
					}
				}	
			}
		break;
		}		
	}
}
