#include <iostream>

using namespace std;
void imprimir(int *arr , int tam){
    for(int i = 0; i < tam; i++){
        cout << *arr << " ";
        arr++;
    }
    cout << endl;
}
int suma(int *arr , int tam){
    int suma = 0;
    for(int i = 0; i < tam; i++){
        suma += *(arr+i);}
    return suma;
    }
int sumaR(int *arr, int tam){
    int suma = 0;
    if(tam == 0){
        return 0;
    }
    suma += *(arr+tam-1);
    return (suma + sumaR(arr, tam-1));

}


void swap(int &arr1,int &arr2){
    int c = arr1;
    arr1 = arr2;
    arr2 = c;
}

void invertir(int *arr , int tam){
    for(int i = 0; i < tam/2; i++){
        int v = *(arr+tam-i-1);
        *(arr+tam-i-1) = *(arr+i);
        *(arr+i) = v;
    }
}
void invertirS(int *arr , int tam){
    for(int i = 0; i < tam/2; i++){
        swap(*(arr+tam-i-1),*(arr+i));
    }
}
void invertirSR(int *arr , int tam,int i){
    if(i <= tam/2){
        swap(*(arr+tam-i-1),*(arr+i));
        return invertirSR(arr, tam,++i);
    }
}

void burbuja(int *arr,int tam){
    for(int i = 1; i < tam; i++){
        for(int j = 0; j < tam-i; j++){
            if(*(arr+j) > *(arr+j+1)){
                int k = *(arr+j+1);
                *(arr+j+1) = *(arr+j);
                *(arr+j) = k;
            }
        }
    }
}
void insercion(int *arr,int tam){
    for(int i = 0; i < tam; i++){
        int actual = *(arr+i);
        int j = i-1;
        while(j >= 0 && *(arr+j) > actual){
            *(arr+j+1)= *(arr+j);
            j--;
        }
        *(arr+j+1)= actual;
    }
}
int particion(int *arr, int start,int fin){
    int follower = start;
    int leader = start;
    while (leader < fin){
        if (*(arr+leader) <= *(arr+fin)){
            swap(*(arr+follower), *(arr+leader));
            follower += 1;
        }
        leader += 1;
    }
    swap(*(arr+follower), *(arr+fin));
    return follower;
}
void _quicksort(int *arr, int start,int fin){
    if (start >= fin){
        return;
    }
    int p = particion(arr, start, fin);
    _quicksort(arr, start, p-1);
    _quicksort(arr, p+1, fin);
}
void quicksort(int *arr, int tam){
    _quicksort(arr, 0, tam-1);
}

int main()
{
    int y[5]={5,3,4,1,2};
    /*int x[5];
    for (int i = 0;i < 5; i++){
        cin>>x[i];
    }*/
    int tam = 5;
    imprimir(y,tam);
    //int a = suma(y,5);
    //cout << a << endl;

    //invertirS(y,5);

    //burbuja(y, tam);
    //insercion(y,tam);
    //quicksort(y,tam);
    imprimir(y,tam);


    return 0;
}
