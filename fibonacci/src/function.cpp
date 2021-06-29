#include "function.h"

/*
blz
*/
std::vector<unsigned int> fib_below_n( unsigned int n )
{
  std::vector<unsigned int> vetor{1,1};
  std::vector<unsigned int> vetorVazio{};
  int n2 = 1;
  int n3 = 2;
  int aux;

  if(n == 1){
    return vetorVazio;
  }

  if (n == 2){
    return vetor;
  }

  while(n > n3){
    vetor.push_back(n3);
    aux = n3;
    n3 += n2;
    n2 = aux;
  }



  return vetor;
}
