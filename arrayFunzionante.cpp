#include <iostream>
#include <string>

using namespace std;

int main()
{

    int array[] = {3, 7, 65, 26}; // creo array da analizzare
    int quantiPari = 0;
    int lunghezza = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < lunghezza; i++)
    {
        if (array[i] % 2 == 0)
        {
            quantiPari++;
        }else {
            break;
        }
    }
    
    int arrayPari[quantiPari] = {};   //creo il secondo array che avrà tanti caratteri quati sono i numri pari sull'array dato
        for(int i = 0;i < quantiPari;i++){
               cin >> arrayPari[i];
             }

        }
