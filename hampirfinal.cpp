#include <iostream>
using namespace std;

int mode, i, j, d1, d2;
int arrj[]{}, arr2[]{}, arr3[]{};
int main ()
{
	cout << "1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Turunan \nPilih operasi : ";
	cin >> mode;
	
	cout << "Masukkan pangkat tertinggi pada polinomial 1 : "; 
	cin >> d1; // Batas pangkat
	int arr1 [d1 + 1] {};
			
	for ( i = d1, j = d1; i >= 0, j >= 0; --i, --j )
		{
			cout << "Masukan konstanta pada X^" << j << ":";
			cin >> arr1[i];
		}
		for ( i = d1; i >= 0; --i)
			{
				if ( arr1[i] != 0 )
				{
					if ( i == d1)
					{
						cout << arr1[i] << "X^" << i;
					}
					else if ( i == 1 )
					{
						if (arr1[i+1] == 0)
						{
						cout << arr1[i] << "X";
						}
						else
						{
							cout << " +" << arr1[i] << "X";
						}
					}
					else if ( i == 0)
					{
						if (arr1[i+1] == 0)
						{
							cout << arr1[0] ;
						}
						else
						{
							cout << " +" << arr1[0];
						}
						
					}
					else
					{
					if (arr1[i+1] == 0)
						{
							cout << arr1[i] << "X^" << i;
						}
						else
						{
							cout << " +" << arr1[i] << "X^" << i;
						}
					}
				}
				else 
				{
					continue ;
				}
			}
	cout << endl;
	if ( mode != 4)
	{
		cout << "Masukkan pangkat tertinggi pada polinomial 2 : ";
		cin >> d2;
		int arr2 [d2 + 1] {};
		
		for ( i = d2, j = d2; i >= 0, j >= 0; --i, --j )
		{
			cout << "Masukan konstanta pada X^" << j << ":";
			cin >> arr2[i];
		}
		for ( i = d2; i >= 0; --i)
				{
					if ( arr2[i] != 0 )
					{
						if ( i == d2)
						{
							cout << arr2[i] << "X^" << i;
						}
						else if ( i == 1 )
						{
							if (arr2[i+1] == 0)
							{
							cout << arr2[i] << "X";
							}
							else
							{
								cout << " +" << arr2[i] << "X";
							}
						}
						else if ( i == 0)
						{
							if (arr2[i+1] == 0)
							{
								cout << arr2[0] ;
							}
							else
							{
								cout << " +" << arr2[0];
							}
							
						}
						else
						{
							if (arr2[i+1] == 0)
							{
								cout << arr2[i] << "X^" << i;
							}
							else
							{
								cout << " +" << arr2[i] << "X^" << i;
							}
						}
					}
					else 
					{
						continue ;
					}
				}
		cout << endl;	
	}		
	
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
		case 3 :
		{
				int k = d1 + d2;
				for( i = d1; i >= 0; --i)
				{
					for ( j = d2; i >=0; --j)
					{
						int arrj [ k + 1 ] {};
						arr3 [i+j] = arr1[i] * arr2[j];
						arrj [i+j] = arrj[i+j] + arr3 [i+j];
					}
					
				}
				for ( i =k; i >= 0; --i)
				{
					if ( arrj[i] != 0 )
					{
						if ( i == k)
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
			break;}
			
		case 4 :
		{
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
