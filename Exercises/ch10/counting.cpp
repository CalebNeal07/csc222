#include <iostream>
using namespace std;

int how_many(const vector<int>&, int);
vector<int> random_vector(int, int);

int main() {
    int num_values = 120;
    int upper_bound = 10;
    vector<int> vector = random_vector(num_values, upper_bound);
    
    cout << "value\thow_many" << endl;
    for (int i = 0; i < upper_bound; i++) {
        cout << i << '\t' << how_many(vector, i) << endl;
    }

    return EXIT_SUCCESS;
}

int how_many(const vector<int>& vec, int value)
{
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == value) count++;
    }
    return count;
}

vector<int> random_vector(int n, int upper_bound)
{
    vector<int> vec(n);

    for (int i = 0; i < vec.size(); i++) {
        vec[i] = rand() % upper_bound;
    }

    return vec;
}
