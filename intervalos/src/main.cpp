/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;
using namespace std;

// Se desejar, crie funções aqui, antes do main().
/*ok*/
int main(void)
{
    double int0 = 0, int1 = 0, int2 = 0, int3 = 0, int4 = 0, soma = 0;
    int entrada;
    

    while(cin >> ws >> entrada){
      if(entrada < 0 || entrada > 99){
        int0++;
        soma++;
      }
      else if(entrada < 25){
        int1++;
        soma++;
      }
      else if(entrada < 50){
        int2++;
        soma++;
      }
      else if(entrada < 75){
        int3++;
        soma++;
      }
      else if(entrada < 100){
        int4++;
        soma++;
      }
    }

    cout << setprecision(4) << (int1 / soma) * 100 << endl;

    cout << setprecision(4) << (int2 / soma) * 100 << endl;

    cout << setprecision(4) << (int3 / soma) * 100 << endl;

    cout << setprecision(4) << (int4 / soma) * 100 << endl;

    cout << setprecision(4) << (int0 / soma) * 100 << endl;

    return 0;
}
