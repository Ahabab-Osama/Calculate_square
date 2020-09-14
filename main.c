#include <stdio.h>
#include <stdlib.h>

int square(int x)
{
  int ans;
  ans = x*x;
  return ans;
}

int main()
{
    int x, result;
    printf("Enter the side of your squre: ");
    scanf("%d", &x);

    result = square(x);

    printf("The squre of your square is: %d", result);

    return 0;
}
