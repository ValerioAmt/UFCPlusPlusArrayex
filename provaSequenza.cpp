#include <iostream>
#include <string>

using namespace std;

int main(){

int array[] = {1,2,3,5,4,7};
int quante ;
int i = 0;
int lung = sizeof(array)/sizeof(array[0]);
int lunghezza = lung;
int y = 0;

while (i < lunghezza){
      for(y=0;y < lunghezza; y++){
         if(array[y] < array[y+1]){
            quante++;
         }else{
           
         }

                    
 break;
      }
 i++; 


}
cout << quante;

}