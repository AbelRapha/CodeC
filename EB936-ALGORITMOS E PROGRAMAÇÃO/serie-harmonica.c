 #include <stdio.h>
 
 int main(void)
 {
     int k, n;
     float h = 0;
     scanf("%d", &n);
     for (k = n; k >= 1; k = k - 1) h = h + 1.0 / k;
     printf("%8.3f\n", h);
     return 0;
 }