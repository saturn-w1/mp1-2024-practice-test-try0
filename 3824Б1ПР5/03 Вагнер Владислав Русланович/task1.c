#include <limits.h>
#include <stdio.h> 

int sum_of_two_numbers(int a, int b) {
  int sum = a + b;
  if (sum >= INT_MAX) {
    return INT_MAX;
  } else if (sum <= INT_MIN) {
    return INT_MIN;
  } else {
    return (int)sum;
  }
}
