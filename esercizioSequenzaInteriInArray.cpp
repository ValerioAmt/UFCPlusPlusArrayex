#include <iostream>
#include <string>

using namespace std;

int main(){

int array[] = {1,2,3,5,4,7};
int quante ;
int i = 0;
int lung = sizeof(array[i])/sizeof(array[0]);
int lunghezza = lung;
int y = 0;

while (i < lunghezza){
      for(y=0;y < lunghezza; y++){
         if(array[y] < array[y+1]){
            quante++;
         }else{
           
         }

            

      }


}
cout << quante;

}
/*
for (i = 0; i < lunghezza; i ++){
    if(array[i]>= array[i+1]){
    
    }else{
        quante++ ;
    }

    
}
cout << quante <<endl;
}
*/
