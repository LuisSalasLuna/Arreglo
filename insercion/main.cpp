#include <iostream>

using namespace std;

void imprimir(int arr[],int tam){
    for(int i = 0; i < tam; i++){
        cout << arr[i]<< " ";
    }
}
void insercion(int arr[],int tam){
    for(int i = 0; i < tam; i++){
        int actual = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > actual){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]= actual;
    }
}
int main()
{
    int x[5]= {35,40,31,12,51};
    imprimir(x,5);
    cout << endl;
    insercion(x,5);
    imprimir(x,5);
    return 0;
}
