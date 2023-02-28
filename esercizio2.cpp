#include <iostream>
#include <string>

using namespace std;


int main(){


int array[] = {4,4,3,7,10};
int maxarray = array[0]; 

int lunghezza = sizeof(array)/sizeof(array[0]);
for (int i =0; i < lunghezza; i++){
    if (array[i] > maxarray)
     maxarray = array[i];
}

cout << maxarray <<endl;

}