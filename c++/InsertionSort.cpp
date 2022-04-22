#include<iostream>
using namespace std;
void insertionSort(int *a,int x);
int main(){
   int size;
   cout << "How many numbers will you type?" << "\n";
   cin >> size;
    int numbers[size];
    for (int x = 0; x < size; x++) {
        cout <<"Enter item "<<to_string(x+1)<<" ";
		cin >> numbers[x];
	} 
    insertionSort(numbers,size);
    return 0;
}
void insertionSort(int *a,int x){
int temp;
for(int i = 1; i < x; i++)
 {
    temp = a[i];
    int m = i-1;
    while (temp < a[m] && m>=0)
     {
         a[i]=a[m];
         a[m]=temp;
         m--;
         i--;
     }

        
     }
    
  for(int i = 0; i < x; i++)
    { 
      
      cout << a[i] <<" ";

    }   

 }


/* for(int i = 0; i < x; i++)
    { 
      
      cout << a[i] <<" ";
    3
    }
*/
