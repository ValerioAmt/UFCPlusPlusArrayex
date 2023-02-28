#include <iostream>
#include <string>

using namespace std;

int main(){

 int array[] = {4,2,78};
 int lunghezza = sizeof(array)/sizeof(array[0]);
 int lung = lunghezza;

 int valMax = array[0];

for(int i = 1; i < lunghezza; i ++){
    if (array[i] > valMax){
       valMax = array[i];
}
}
  cout << valMax<<endl;
}