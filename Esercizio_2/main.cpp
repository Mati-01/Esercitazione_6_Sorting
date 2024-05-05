#include <iostream>
#include <vector>
#include <ctime> // Aggiunto per includere <ctime>
#include "SortingAlgorithm.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Utilizzo: " << argv[0] << " <dimensione_vettore>" << std::endl;
        return 1;
    }

    int dimensioneVettore = std::atoi(argv[1]);
    if (dimensioneVettore <= 0) {
        std::cerr << "La dimensione del vettore deve essere un numero positivo." << std::endl;
        return 1;
    }

    std::vector<int> arr(dimensioneVettore);

    // Genera numeri casuali
    std::srand(std::time(nullptr)); // Utilizza la funzione time()
    for (int i = 0; i < dimensioneVettore; ++i) {
        arr[i] = std::rand() % 1000; // Numeri casuali tra 0 e 999
    }

    // Copia il vettore per il sorting
    std::vector<int> arrCopia(arr);

    // Bubble Sort
    std::cout << "Bubble Sort:" << std::endl;
    SortLibrary::BubbleSort(arr);
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Merge Sort
    std::cout << "Merge Sort:" << std::endl;
    SortLibrary::MergeSort(arrCopia);
    for (int num : arrCopia) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
