#include <iostream>
using std::cin;
using std::cout;

using namespace std;

const int SIZE = 5; // input size.

/*
ok
*/
int main(void)
{
  int Negativos = 0;
  int Numero;

  for(int x = 0; x < 5; x++){
    cin>>Numero;
    if(Numero < 0){
      Negativos++;
    }
  }

  cout<<Negativos;

  
  return 0;
}
