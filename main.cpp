#include <iostream>
void massive (int a[], int n);
void sort (int a[], int n);
void pechat (int a[], int n);
int main() {
    int n;
    printf ("введите размер массива:\n");
    scanf ("%d", &n);
    int a[n];
    massive(a,n);
    sort (a,n);
    printf("\n");
    pechat(a,n);
    return 0;
}
void massive (int a[],int n){
    srand(time(NULL));
    for (int i=0;i<n;i++){
        a[i]=rand()%100;
        printf ("%10d",a[i]);
    }
}
void sort (int a[], int n) {
    int c;
    for (int i=1; i<n;i++) {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                c = a[j + 1];
                a[j + 1] = a[j];
                a[j] = c;
            }
        }
    }
}
void pechat (int a[], int n){
    for (int i=0;i<n;i++)
        printf ("%10d",a[i]);
}
