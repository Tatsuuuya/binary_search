#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i] / x;
    }
    return k <= sum;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  /*lb = 100000001;  (������������܂����B0�������܂���ł����Blb=10^9+1�ƍl�������R��10^9�̂Ƃ��A���肬��p(lb)==1�ƂȂ��Ă��܂����߁A�����1�𑫂�������ł��B���w�E���肪�Ƃ��������܂��B)*/
  lb = 1000000001;
  ub = 0;
  while (lb - ub > 1) {
      int mid = (lb + ub) / 2;
      if (p(mid)) {
          ub = mid;
      }
      else {
          lb = mid;
      }
  }
  printf("%d\n", ub);


  return 0;
}
