#include <stdio.h>
int main(){
  int n, m, numa,numb, flag, count = -1, sa[n], sb[n];
  scanf("%d", &n);
  int a[n], b[n];
  for (int i=0; i<n ; i++)
  scanf("%d", &a[n]);
  for (int i=0; i<n ; i++)
  scanf("%d", &b[n]);

  for (numb = 1; numb <=30 ; numb++) {
    flag = 1;
    for (numa = 1; numa <=30 ; numa++) {
     for (int i=1; i<n ; i++) {
        if ((numb*a[i])/(numa*b[i]) != (numb*a[i-1])/(numa*b[i-1])) {
          flag = 0;
        }
        if (flag == 1) {
          count++;
          sa[count] = numa;
          sb[count] = numb;
        }  
      }
    }
  }

  printf("%d\n" , (sa[n]*a[n])/(sb[n]*b[n]) );
}