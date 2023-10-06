#include <iostream>

int how_many(const std::vector<int>&, int);
std::vector<int> random_vector(int, int);

int num_values = 100000;
int upper_bound = 10;
std::vector<int> histogram(upper_bound);

int main() {
    
    std::vector<int> vector = random_vector(num_values, upper_bound);

    for (int i = 0; i < upper_bound; i++) {
        int count = how_many(vector, i);
        histogram[i] = count;
    }

    return EXIT_SUCCESS;
}

int how_many(const std::vector<int>& vec, int value)
{
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == value) count++;
    }
    return count;
}

std::vector<int> random_vector(int n, int upper)
{
    std::vector<int> vec(n);

    for (int i = 0; i < vec.size(); i++) {
        vec[i] = rand() % upper;
    }

    return vec;
}




