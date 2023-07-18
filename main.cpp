#include <vector>
#include <fstream>
#include <stdio.h>

template <typename T>
void BubbleSort(std::vector<T>& array);

int main(int argc, char* argv[]) {
    std::ifstream reader(".\\input.txt");

    std::vector<int> array;

    while (!reader.eof()) {
        int number;
        reader >> number;

        array.emplace_back(number);
    }

    BubbleSort(array);

    for (const auto& elem : array) {
        std::printf("%d ", elem);
    }

    return 0;
}

template <typename T>
void BubbleSort(std::vector<T>& array) {

}