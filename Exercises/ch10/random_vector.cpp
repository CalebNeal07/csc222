#include <iostream>
#include <vector>
#include <random>
using namespace std;

vector<int> random_vec();

int main() {
    srand(time(nullptr));

    vector<int> x = random_vec();

    return EXIT_SUCCESS;
}

vector<int> random_vec() {
    vector<int> vec(10);

    fill(vec.begin(), vec.end(), (rand() % 10) + 1);

    return vec;
}
