#include <iostream>
#include <string>

using namespace std;

int *comune(int array1[], int array, int lung1, int lung2)
{

    int contatore = 0;                       //scopro lunghezza array
    for (int i = 0; i < lung1; i++)
    {

        for (int y = 0; y < lung2; y++)
        {

            if (array1[i] == array2[])
            {

                contatore++;
            }
        }
    }
    int nuovoArr[contatore];
    for (int i = 0; i < contatore; i++)
    {
    }

    /*for(int i = 0; i < contatore; i++){
     cout << " " << nuovoArr[i];
    }
}   */
}

int main()
{

    int contatore;
    int array1[] = {1, 5, 15, 8};
    int array2[] = {48, 5, 32, 1};
    int x = sizeof(array1) / (array1[0]);
    int x = sizeof(array2) / (array2[0]);
    int *quanti = comune(array1, array2, x, y);
    cout << " i numeri in comune sono: " << quanti << endl;
}