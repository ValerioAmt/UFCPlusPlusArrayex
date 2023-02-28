#include <iostream>
#include <string>

using namespace std;
/*
int controllaDoppie(int array[], int arrayDue[], int lunghezzaUno, int lunghezzaDue){
int contatore = 0;

    for (int i = 0; i < lunghezzaUno; i++)
    { // confronto i due array utilizzando due indici (i,y)
        for (int y = 0; y < lunghezzaDue; y++)
        {
            if (array[i] == arrayDue[y])
            {
                contatore++;
            }
        }
    }
}
  */
    int main()
    {
        int arrayPrimo[] = {1, 2, 3, 4};
        int arraySecondo[] = {2, 4, 6, 8};
        int contatore = 0;
        int lunghezzaprimo = sizeof(arrayPrimo) / sizeof(arrayPrimo[0]);
        int lunghezzasecondo = sizeof(arraySecondo) / sizeof(arraySecondo[0]);
         for(int i=0;i<lunghezzaprimo;i++){                                //confronto i due array utilizzando due indici (i,y)
          for(int y=0;y<lunghezzasecondo;y++){
                 if(arrayPrimo[i]==arraySecondo[y]){
                  contatore ++;
                 
                 }
          
          } 
       // cout << controllaDoppie(arrayPrimo,arraySecondo,lunghezzaprimo,lunghezzasecondo) << endl;
    }
    cout << contatore<<endl;
    }