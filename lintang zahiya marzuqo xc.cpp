#include <stdlib.h>
#include <iostream>
using namespace std;
	
int indeks_NilaiMin(int array[], int indeksAwal, int n)
{
        int nilaiMin = array [indeksAwal];
       	int indeksMin = indeksAwal; 
     	
     	for(int i = indeksMin + 1; 1 < n; i++) {
		      if (array[i] < nilaiMin)
		       {
				      indeksMin = i;
				      nilaiMin = array[i];
			   }
        }
        return indeksMin;
}

void selection_sort(int array[], int n)
{
      int buffer, indeks;
      for(int i = 0; i < n; i++)
      {
	  indeks = indeks_NilaiMin(array, i, n);
	  buffer = array[i];
	  array[i] = array[indeks];
      array[indeks] = buffer;
      }
}

int main()
(
      int i, n;
      cout << "Masukkan jumlah elemen yg diurutkan: ";
      cin >> n;
      int A [n];
      for(i = 0; i < n; i++)
      {
	       cout<< "masukkan bilangan ke-" << i+1 << " : ";
	         cin >> A[i];
      }
      selection_Sort(A, n);
      cout<< "hasil pengurutan pilihan : ";
      for(i = 0; i < n; i++)
      {
      	    cout << " " << A[i];
      }
      cout << endl;
      system ("pause");
      return 0;
      
}
  

  
      
