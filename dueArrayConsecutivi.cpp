#include <iostream>
#include <string>

using namespace std;

int main(){

int arrayPrimo[] = {1,2,3};
int arraySecondo[] = {4,5,6};
int x = sizeof(arrayPrimo)/sizeof(arrayPrimo[0]);
int y = sizeof(arraySecondo)/sizeof(arraySecondo[0]);
int arrayFinale[x+y] ;                                 //creo spazio esatto per ultimo array
               for (int i = 0; i < x;i ++){
                      arrayFinale[i] += arrayPrimo[i];
               }

               for (int i = 0; i < x; i++){
                arrayFinale[i] += arraySecondo[i];
               }

            cout << arrayFinale;
}