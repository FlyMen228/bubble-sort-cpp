#include <vector>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

template <typename T>
void BubbleSort(std::vector<T>& array);

std::vector<int> GenerateRandomIntVector(); 

int main(int argc, char* argv[]) {
    auto array = GenerateRandomIntVector();

    BubbleSort(array);

    for (const auto& elem : array) {
        printf("%d ", elem);
    }

    return 0;
}

std::vector<int> GenerateRandomIntVector() {
    std::vector<int> array;

    for (auto i = 1; i <= 10000; ++i) {
        srand(time(0) * i);
        
        auto number = (rand() % 1000 + 1) * (rand() % 3 - 1);

        array.emplace_back(number);
    }

    return array;
}

template <typename T>
void BubbleSort(std::vector<T>& array) {
    for (std::size_t i = 0; i < array.size() - 1; ++i) {
        bool break_point = false;

        for (std::size_t j = 0; j < array.size() - i - 1; ++j) {
            if (array[j] > array[j+1]) {
                std::swap(array[j], array[j+1]);
                
                break_point = true;
            }
        }

        if (!break_point) {
            break;
        }
    }
}