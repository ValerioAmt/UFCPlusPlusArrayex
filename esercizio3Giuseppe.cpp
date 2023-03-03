#include <iostream>
#include <string> 

using namespace std;

void riempi(int arr[], int l)
{
int input = 0;
int i = 0;
while(input != -1000 && i < 99){
    cout << "inserisci numero";
    arr[i] = input;
    i++;
}
  if ( i = 99)
    {
        arr[i] = -1000;
    }

}

int conta(int n, int arr[], int l){

    int x = 0;
    int cont = 0;
    while(arr[x]!= -1000){
        if(arr[x] == x){
            cont++;
        }
        x++;
}
   return cont;
}

int main(){

int a1[100];
int a2[100];
riempi(a1,100);
riempi(a2,100);
int i = 0;
while(a1[i] != -1000)
{
    cout << a1[i] << " è presente" << conta(a1[i],a2,100);
    
i++;
       
    }


}


