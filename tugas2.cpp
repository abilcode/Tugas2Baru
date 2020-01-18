#include <iostream>
using namespace std;

int mode, i, j, d1, d2,k,l,m,n,turunan,derajat,M,N,c;
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
							cout <<" + " << arrj[i] << "X";
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
			c = 0;
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
					if (c != d1){
					if ( arrj[i] != 0 && arr1[i]-arr2[i] != 0 )
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
					else if (arr1[i]-arr2[i] == 0)
					{
						c = c + 1;
					}
					
					else 
					{
						continue ;
					}
				}
				else if(c == d1)
				{
					cout << "0";
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
				 
			}
				
			else
			{
				continue;
			}

						
		}	
	
	}
	
		
		
	
		if (arr3[m] != 0)
		{
			if(arr3[m]!= 1)
			{	
				if(m == 0)
				{
					cout << arr3[m] << "X^" << n-m;
				}
				else if (n-m ==0)
				{
					cout << " + " << arr3[m];
				}
				else 
				{
					cout << " + " << arr3[m] << "X^" << n-m;
				}
			}
			else
			{
			if(m == 0)
				{
					cout << "X^" << n-m;
				}
				else if (n-m ==0)
				{
					cout << " + " << arr3[m];
				}
				else 
				{
					cout << " + " << "X^" << n-m;
				}	
			}	
		}
		else
		{
			continue;
		}
	}
	
	
	
	break;
	}

	case 4 :
	{
	cout << "Masukan derajat : ";
	cin >> derajat;
	int arr[derajat+1]{};
	for (i = 0, j = derajat ; i <= derajat, j >= 0 ; ++i, --j ){
		cout << "Masukan ke-X^"<<j<< " : ";
		cin >> arr[i];
	}
	for(i = 0, j = derajat ;  i <= derajat, j >= 0; ++i,--j)
		{
			if(i == 0)
			{
				cout << arr[i] << " X^" << j;
			}
			else if (j != 0 && arr[i] != 0)
			{
				cout << " + " << arr[i] << " X^" << j;
			}
			else if (j == 0 && arr[i] != 0)
			{
				cout << " + "<< arr[i] ;
			}else
			{
				continue;
			}
		}
		cout<<endl;

	
		{
			for (i = 0, j = derajat ;  i<= derajat, j >= 0; ++i,--j){
			if(j>0 && arr[i]*j != 0)
			{
				if(j-1==0)
				{
					cout << arr[i]*j << " ";
			}
				else if (j-1 >1){
					cout <<" "<< arr[i]*j << " X^" << j-1 << " + " ;
				}
				else 
				{
					cout <<" "<< arr[i]*j << " X" << " + " ;
				}
			}
			else if (j==0 && arr[i]*j !=0){
				cout << " " << arr[i]*j;
			}
			else if (arr[i]*j==0) {
				continue;
			}
			}
		
		
		

	
	

	}

} 
}
}
