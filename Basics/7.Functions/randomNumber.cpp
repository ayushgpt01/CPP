#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    // Generate random Number using rand function and seeding with srand function
    int randomNum {};
    size_t count {10};
    int min {1};
    int max {6};

    cout << "RAND max is " << RAND_MAX << endl;
    // need to seed or we get same set of random numbers every run
    srand(time(nullptr));

    for (size_t i = 1; i<=count;i++){
        randomNum = rand() % max + min;
        cout << "Random num "<<i <<" - " << randomNum << endl;
    }
    return 0;
}