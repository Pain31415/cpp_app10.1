#include <iostream>

int main() {
    int M, N;

    std::cout << "Enter the size of array A: ";
    std::cin >> M;

    std::cout << "Enter the size of array B: ";
    std::cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    std::cout << "Enter the elements of array A: ";
    for (int i = 0; i < M; ++i) {
        std::cin >> A[i];
    }

    std::cout << "Enter the elements of array B: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> B[i];
    }

    int* C = new int[M + N];

    for (int i = 0; i < M; ++i) {
        C[i] = A[i];
    }

    for (int i = 0; i < N; ++i) {
        C[M + i] = B[i];
    }

    std::cout << "The third array C, which merges arrays A and B: ";
    for (int i = 0; i < M + N; ++i) {
        std::cout << C[i] << " ";
    }
    std::cout << std::endl;

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}