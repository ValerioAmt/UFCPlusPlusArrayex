#include <iostream>

using namespace std;

int arrayContaUguali(int array1[], int array2[], int lung1, int lung2)
{
    int comuni = 0;

    for (int i = 0; i < lung1; i++)
    {
        for (int j = 0; j < lung2; j++)
        {
            if (array1[i] == array2[j])
            {
                comuni++;
            }
        }
    }
    return comuni;
}
        int *comune(int array1[], int array, int lung1, int lung2){
             int arrayNuovo;
             int contatore = 0;
               for(int i = 0; i < lung1; i++){

                   for (int y = 0; y < lung2; y ++){

                     if (array1[i] == array2[])
                   }




               }




        }
int main()
{
    int array1[4] = {1, 2, 3, 4};
    int array2[4] = {11, 12, 13, 8};
    int x = sizeof(array1) / sizeof(array1[0]);
    int y = sizeof(array1) / sizeof(arra2[0]);
    int* nuovoArray[];

    cout << arrayContaUguali(array1, array2, x, y);
}