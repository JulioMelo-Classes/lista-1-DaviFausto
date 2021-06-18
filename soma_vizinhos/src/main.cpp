/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

using namespace std;

int main( void )
{
  int m, n;
  int soma;

  while(cin>>m>>n){
    soma = 0;

    if(n > 0){
      m--;
      for(int x = 0; x < n; x++){
        m++;
        soma += m;
      }
    }

    if(n < 0){
      m++;
      for(int x = 0; x > n; x--){
        m--;
        soma += m;
      }
    }

    if(n == 0){
      soma = m;
    }

    cout<<soma<<endl;
  }
  
  return 0;
}
