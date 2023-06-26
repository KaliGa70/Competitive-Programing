#include <iostream>
#include <vector>

void code() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> arreglo(N);
    for (int i = 0; i < N; i++)
        std::cin >> arreglo[i];

    int minVal, maxVal, minimo, maximo;
    for (int i = 0; i < M; i++) {
        char letter;
        std::cin >> letter;
        
        std::cin >> minVal >> maxVal;

        if (letter == 'C') {
            

            minimo = arreglo[minVal];
            maximo = arreglo[minVal];

            for (int j = minVal - 1; j < maxVal; j++) {
                if (arreglo[j] > maximo)
                    maximo = arreglo[j];
                if (arreglo[j] < minimo)
                    minimo = arreglo[j];
            }

            std::cout << minimo << ' ' << maximo << '\n';
        }

        if (letter == 'A') {
        	
            arreglo[minVal - 1] = maxVal;
            
        }
    }
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    code();

    return 0;
}

