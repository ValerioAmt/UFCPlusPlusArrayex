#include <iostream>
#include <string>

using namespace std;

int calcolaMax(int array[],int lunghezza){

  for(int i = 1; i < lunghezza; i ++){
    if (array[i] > valMax){
       valMax = array[i];
} 
  }
  return valMax;
}
int main(){

 int array[] = {4,2,78};
 int lunghezza = sizeof(array)/sizeof(array[0]);
 int lung = lunghezza;

 int valMax = calcolaMax(array, lung);
/*
for(int i = 1; i < lunghezza; i ++){
    if (array[i] > valMax){
       valMax = array[i];
*/cout << calcolaMax(array, lung) <<endl;
}
  
