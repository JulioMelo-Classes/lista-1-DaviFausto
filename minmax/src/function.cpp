#include "function.h"
#include <cstddef>
using std::size_t;

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

/*
ok
*/
std::pair<int,int> min_max( int V[], size_t n )
{
  int min, max = V[0];
  int min2, max2;

  for(int x = 0; x < n; x++){
    if(V[x] < min){
      min = V[x];
      min2 = x;
    }
    if(V[x] >= max){
      max = V[x];
      max2 = x;
    }
  }

  if(n == 0){
    return { -1, -1};
  }


  return { min2, max2 };
}
