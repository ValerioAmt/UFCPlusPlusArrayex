#include <iostream>
#include <string>
using namespace std;





int main (){

int array[] = {5,7,10,56};
int calcoloLung = sizeof(array)/sizeof(array[0]);
int lunghezza = calcoloLung;
int max = 0;         
     for (int i=0;i < lunghezza; i++)
               {
                 if (array[i] < array[i+1]|| array[i]<lunghezza){
                    max = array[i];
                 }     else {
                    
                 }
               }

cout <<max <<endl;
}