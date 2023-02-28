#include <iostream>
#include <string>

using namespace std;




int somma(int arrayInteri[], int grandezza)
{
    int risultato = 0;
    for (int i = 0; i < grandezza; i++)
    {
        risultato += arrayInteri[i];
    }

    return risultato;
}

int main()
{
    int arrayInteri[] = {1, 2, 3, 4, 5, 6};
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    cout << "la somma dei numeri inseriti nell'array è: " << somma(arrayInteri, grandezza) << endl;
}






    
