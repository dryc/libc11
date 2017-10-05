/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

/**
 * @date   2017-10-05
 * @author Samuel Sarle
 * @see    http://libc11.org/math/sqrt.html
 */

double
sqrt(const double x) {
  if (x <= 0) {
    return 0;
  }

  int i = 0; 
  while( (i * i) <= x ) {
    i++;
  }
  i--; 
  double z = x - i * i;        //Bakhshali approximation
  double y = z / (2 * i);         
  double w = i + y; 
  return w - (y * y) / (2 * w);
}

#include <stdio.h>

int
main() {
  printf("%.10f\n",sqrt(5));
  printf("%.10f\n",sqrt(10));
  printf("%.10f\n",sqrt(2));
  printf("%.10f\n",sqrt(4));
  printf("%.10f\n",sqrt(-16));
  printf("%.10f\n",sqrt(1000000));
}
