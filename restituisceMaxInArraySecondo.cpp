#include <iostream>
#include <string>
#include <array>

using namespace std;

int trovaMaggiore(int array[], int lunghezza)
{
  int max = 0;
    for (int i = 0; i < lunghezza; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{

 int arrayProva[] = {};
 for (int i=0;i < 5;i ++){
    cout <<"Inserisci un numero intero \n";
    cin >> arrayProva[i]; 
 } 
 int lunghezza = sizeof(arrayProva) / sizeof(arrayProva[0]);

 cout << "Il maggior elemento presente in questo array è : " << trovaMaggiore(arrayProva, lunghezza)<<endl;

    
}