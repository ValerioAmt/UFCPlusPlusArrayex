#include <iostream>
#include <string>

using namespace std;
int main(){
int array[] = {8,64,39,77,3,7}; int lung = sizeof(array)/sizeof(array[0]);
int lunghezza = lung;
int arrayPari[] ={} ;
int v = 0;
      for(int i =0;i < lung;i++){   //per tutti gli elementi faccio le operazion dentro il for;
          if (array[i]%2==0){
                      
            cin >> arrayPari[v] ;
            v++;
               }
               else if(array[i] > lung){
                break;
               }
               else {
                cout << "non ci sono numeri pari ";
               }
               
               cout<< arrayPari[v]<<endl;
                
}
}