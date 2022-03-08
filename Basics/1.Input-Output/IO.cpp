#include <iostream>

int main()
{
    // A simple I/O program
    // Variable which stores data
    int favNum;

    // cout used to display the data
    std::cout << "Enter your favorite number : ";

    // cin used to pass in the data to variable from keyboard input
    std::cin >> favNum;

    std::cout << "Your Favorite number is : " << favNum << std::endl;
    return 0;
}