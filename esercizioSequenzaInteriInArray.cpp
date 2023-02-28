#include <iostream>
#include <string>

using namespace std;

int main(){

int array[] = {1,2,3,5,4,7}
int quanteSequenze = 0;
int i = 0;
int lung = sizeof(array[i])/sizeof(array[0]);
int lunghezza = lung;
for (i = 0; i < lunghezza; i ++){
    if(array[i]>= array[i+1]){
    
    }else{
        quanteSequenze + 1;
    }

    
}
cout << quanteSequenze;
}