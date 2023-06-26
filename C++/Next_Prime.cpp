 @author KaliGa70 - 
  
 - Github httpsgithub.comKaliGa70 
  


#define wii int i = 0; i  n; i++

#include bitsstdc++.h

using namespace std;

void sieveOfEratosthenes(int n, vectorbool& isPrime) {
     Inicializar el vector de números primos
    isPrime.assign(n + 1, true);

     El número 0 y el número 1 no son primos, así que los marcamos como falsos
    isPrime[0] = isPrime[1] = false;

     Realizar el proceso de la criba
    for (int p = 2; p  p = n; ++p) {
         Si isPrime[p] es verdadero, entonces es un número primo
        if (isPrime[p] == true) {
             Actualizar todos los múltiplos de p como no primos
            for (int i = p  p; i = n; i += p) {
                isPrime[i] = false;
            }
        }
    }

}

int main(){
	
	iossync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	
	long x = 100006;
	
	vectorbool isPrime;
    sieveOfEratosthenes(x, isPrime);

    long long numero;
    cin  numero;

    bool estaONO = isPrime[numero];

    if (estaONO) {
    	cout  numero;
    } else {
        for (long long i = numero; i = x; ++i) {
            if (isPrime[i]) {
                cout  i;
                break;
            }
        }
    }
	
	return 0;
	
} 