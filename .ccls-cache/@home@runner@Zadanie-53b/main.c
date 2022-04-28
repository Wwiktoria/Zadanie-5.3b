#include <stdio.h>

int main(void) {
  int x, y, m, n;
  int wektor[10][1];
  int macierz[10][10];
  int wynik_wektora[10][10];
  int i, j; //i rzędy, j kolumny

  printf("Wpisz liczbę elementów wektora: ");
  scanf("%d", &x);
  printf("Wpisz liczbę wierszy macierzy: \n");
  scanf("%d", &m);
  printf("Wpisz liczbę kolumn macierzy: \n");
  scanf("%d", &n);
  if(n==x)
  {
    for(i=0;i<x;i++){ //wprowadzanie
      for(j=0;j<1;j++){
        printf("Podaj wyraz wektora ");
        scanf("%d", &wektor[i][j]);
      }
    }
    for (i=0; i<m; i++){
      for(j=0; j<n; j++){
        printf("Podaj elementy macierzy: \n");
        scanf("%d", &macierz[i][j]);
      }
    }
    for(i=0;i<m;++i){
      for(j=0;j<1;++j)
      {
        wynik_wektora[i][j]=0;
        for(y=0;y<x;++y)
          wynik_wektora[i][j]=wynik_wektora[i][j]+macierz[i]               [y]*wektor[y][j];
      }
    }
    printf("Nowy wektor: \n");
    for(i=0;i<m;++i){
      for(j=0;j<1;++j){
        printf("%d ", wynik_wektora[i][j]); 
      }
      printf("\n");
    }
  }
  else printf("Nie można pomnozyc tej macierzy i wektora\n");
  return 0;
}