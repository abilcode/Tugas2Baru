#include <iostream>
using namespace std;
int derajat1,derajat2, mode,i,j,derajat;
int tipearit,turunan;
int main()
{
	cout << "Masukan : 1.Aritmetika, 2. Turunan : ";
	cin >> mode;

	switch (mode)
	{
		case 1 :
		{
			cout << "Pilih aritmatika : 1.Tambah,2.Kurang,3.Kali,4.Bagi : ";
			cin >> tipearit;
			if(tipearit == 1)
			{
				
				cout << "Masukan derajat Polinom 1: ";
				cin >> derajat1;
				int arr1[derajat1+1]{};

				for (i = 0, j = derajat1 ; i <= derajat1, j >= 0 ; ++i, --j )
				{
					cout << "Masukan ke-X^"<<j<< " : ";
					cin >> arr1[i];
				}

				cout << "Masukan derajat Polinom 2:  ";
				cin >> derajat2;
				int arr2[derajat2+1]{};
				
				for (i = 0, j = derajat2 ; i <= derajat2, j >= 0 ; ++i, --j )
				{
					cout << "Masukan ke-X^"<<j<< " : ";
					cin >> arr2[i];
				}
				
				if(derajat1 > derajat2)
				{
					derajat = derajat1;
					int arrjumlah[derajat]{};
					for (i = 0; i <=derajat; ++i )
					{
						arrjumlah[i] = arr1[i] + arr2[i];
					}
					for (i = 0,j = derajat1; i <=derajat; ++i,--j )
					{
						if (i == 0)
						{
							cout << arrjumlah[i] << "X^" <<j;
						}
						else if (j ==0)
						{
							cout << " + " << arrjumlah[i];
						}
						else
						{
							cout << " + " << arrjumlah[i] << "X^" << j;
						}
					}	



				}
				else
				{
					derajat = derajat2;
					int arrjumlah[derajat+1];
					for (i = 0; i <=derajat; ++i )
					{
						arrjumlah[i] = arr1[i] + arr2[i];
					}
					
					for (i = 0,j = derajat2; i <=derajat; ++i,--j )
					{
						if (i == 0)
						{
							cout << arrjumlah[i] << "X^" <<j;
						}
						else if (j ==0)
						{
							cout << " + " << arrjumlah[i];
						}
						else
						{
							cout << " + " << arrjumlah[i] << "X^" << j;
						}
					}	
				}	
				
			
		}
		else if(tipearit == 2) 
			{
				cout << "Masukan derajat Polinom 1: ";
				cin >> derajat1;
				int arr1[derajat1+1]{};

				for (i = 0, j = derajat1 ; i <= derajat1, j >= 0 ; ++i, --j )
				{
					cout << "Masukan ke-X^"<<j<< " : ";
					cin >> arr1[i];
				}

				cout << "Masukan derajat Polinom 2:  ";
				cin >> derajat2;
				int arr2[derajat2+1]{};
				
				for (i = 0, j = derajat2 ; i <= derajat2, j >= 0 ; ++i, --j )
				{
					cout << "Masukan ke-X^"<<j<< " : ";
					cin >> arr2[i];
				}
				
				if(derajat1 > derajat2)
				{
					derajat = derajat1;
					int arrjumlah[derajat]{};
					for (i = 0; i <=derajat; ++i )
					{
						arrjumlah[i] = arr1[i] - arr2[i];
					}
					for (i = 0,j = derajat1; i <=derajat; ++i,--j )
					{
						if (i == 0)
						{
							cout << arrjumlah[i] << "X^" <<j;
						}
						else if (j ==0)
						{
							cout << " + " << arrjumlah[i];
						}
						else
						{
							cout << " + " << arrjumlah[i] << "X^" << j;
						}
					}	



				}
				else
				{
					derajat = derajat2;
					int arrjumlah[derajat+1];
					for (i = 0; i <=derajat; ++i )
					{
						arrjumlah[i] = arr1[i] - arr2[i];
					}
					
					for (i = 0,j = derajat2; i <=derajat; ++i,--j )
					{
						if (i == 0)
						{
							cout << arrjumlah[i] << "X^" <<j;
						}
						else if (j ==0)
						{
							cout << " + " << arrjumlah[i];
						}
						else
						{
							cout << " + " << arrjumlah[i] << "X^" << j;
						}
					}	
				}	
			}

		
	}
	case 2 :
	{
		cout << "Mau Turunan ke Berapa (1/2) : ";
	cin >> turunan;
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
			if (j != 0 && arr[i] != 0)
			{
				cout << " + " << arr[i] << " X^" << j;
			}else if (j == 0 && arr[i] != 0){
				cout << " "<< arr[i] ;
			}else
			{
				continue;
			}
		}
		cout<<endl;

	switch (turunan)
	{
		case 1  :
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


	
	return 0;
	}
}