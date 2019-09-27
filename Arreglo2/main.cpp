#include <iostream>

using namespace std;
void imprimir(int arr [], int tam){
    for(int i = 0; i < tam; i++){
        cout << arr[i]<< ";";
    }
}
int suma(int arr [], int tam){
    int suma = 0;
    for(int i = 0; i < tam; i++){
        suma += arr[i];}
    return suma;
    }
int sumaR(int arr[], int tam){
    int suma = 0;
    if(tam == 0){
        return 0;
    }
    suma += arr[tam-1];
    return (suma + sumaR(arr, tam-1));

}

void invertir(int arr [], int tam){
    for(int i = 0; i < tam/2; i++){
        int v = arr[tam-i-1];
        arr[tam-i-1] = arr[i];
        arr[i] = v;
    }
}
void invertirS(int arr [], int tam){
    for(int i = 0; i < tam/2; i++){
        int v = arr[tam-i-1];
        swap(arr[tam-i-1],arr[i]);
        swap(arr[i],v);
    }
}
void invertirSR(int arr [], int tam,int i){
    if(i <= tam/2){
        swap(arr[tam-i-1],arr[i]);
        return invertirSR(arr, tam,++i);
    }

}

void burbuja(int arr[],int tam){
    for(int i = 1; i < tam; i++){
        for(int j = 0; j < tam-i; j++){
            if(arr[j] > arr[j+1]){
                int k = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = k;
            }
        }
    }
}
void selectionsort(int arr[],int tam){
    for(int i = 0; i < tam-1; i++){
        int mini=i;
        for(int j = i+1; j < tam; j++){
            if (arr[mini] > arr[j]){
                mini=j;
            }
        int aux=arr[mini];
        arr[mini]=arr[i];
        arr[i]=aux;
        }
    }
}
int particion(int arr[], int start,int fin){
    int follower = start;
    int leader = start;
    while (leader < fin){
        if (arr[leader] <= arr[fin]){
            swap(arr[follower], arr[leader]);
            follower += 1;
        }
        leader += 1;
    }
    swap(arr[follower], arr[fin]);
    return follower;
}
void _quicksort(int arr[], int start,int fin){
    if (start >= fin){
        return;
    }
    int p = particion(arr, start, fin);
    _quicksort(arr, start, p-1);
    _quicksort(arr, p+1, fin);
}
void quicksort(int arr[], int tam){
    _quicksort(arr, 0, tam-1);
}



int main()
{
    int x[5];
    for (int i = 0;i < 5; i++){
        cin>>x[i];
    }
    //imprimir(x,5);
    //int a = sumaR(x,5);
    //cout << a << endl;
    //selectionsort(x,5);
    //invertirSR(x,5,0);
    quicksort(x,5);
    imprimir(x,5);


    return 0;
}
