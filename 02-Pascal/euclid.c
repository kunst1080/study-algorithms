#include <stdio.h>

int main(int argc, char const *argv[]) {
  if (argc != 3) {
    printf("error! argc is %d\n", argc);
    return -1;
  }
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int res = gcd(x, y);
  printf("gcd(%d, %d) is %d\n", x, y, res);
  return 0;
}

int gcd(int u, int v) {
  int t;

  printf("u = %d, v = %d\n", u, v);
  for (;;) {
    if (u < v) {
      t = u;
      u = v;
      v = t;
    }
    u = u - v;
    if (u == 0)
      break;
  }
  return v;
}
