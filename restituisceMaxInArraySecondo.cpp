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

 int arrayProva[5] ;
  int lung = sizeof(arrayProva) / sizeof(arrayProva[0]);

 for (int i=0;i < 5;i ++){
    cout <<"Inserisci 5 numeri intero \n";
    cin >> arrayProva[i]; 
    //cout << arrayProva;
 } 

 cout << "Il maggior elemento presente in questo array è : " << trovaMaggiore(arrayProva, lung) <<endl;

    
}