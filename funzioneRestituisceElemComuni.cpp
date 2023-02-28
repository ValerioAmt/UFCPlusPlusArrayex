#include <iostream>
#include <string>

using namespace std;


int main (){
int arrayPrimo[] = {1,2,3,4};
int arraySecondo[] = {2,4,6,8};
int contatore = 0;
int lunghezzaprimo = sizeof(arrayPrimo)/(sizeof(arrayPrimo[0]));
int lunghezzasecondo =sizeof(arraySecondo)/sizeof(arraySecondo[0]); 
   for(int i=0;i<lunghezzaprimo;i++){
    for(int y=0;y<lunghezzasecondo;y++){
           if(arrayPrimo[i]==arraySecondo[y]){
            contatore ++;
           }
             


    }         

   }

    cout << contatore<<endl;



}