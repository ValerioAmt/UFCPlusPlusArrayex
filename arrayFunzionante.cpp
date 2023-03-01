#include <iostream>
#include <string>

using namespace std;

// in questo tipo di esercizi, IMPORTANTE STABILIRE DIMENSIONI DI ARRAY PRIMA DI UTLIZZARLO!!!
// IL PRIMO FOR A RIGA 16, STABILISCE LA DIMENSIONE DEL SECONDO ARRAY, DOVE CI SARANNO SOLO NUMERI PARI!
int main()
{

    int array[4] = {3, 7, 54, 26}; // creo array da analizzare
    int quantiPari = 0;
    int lunghezza = sizeof(array);

    for (int i = 0; i < lunghezza; i++)
    {
        if (array[i] % 2 == 0)
        {
            quantiPari++;
        }
    }

    int arrayPari[quantiPari]; // creo il secondo array che avrà tanti caratteri quati sono i numri pari sull'array dato
    for (int i = 0; i < quantiPari; i++)
    {
        cin >> arrayPari[i];
    }
    cout << arrayPari[quantiPari] << endl;
}
