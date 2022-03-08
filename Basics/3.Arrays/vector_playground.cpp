#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1,vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Vector1 - index 0 - " << vector1.at(0)<<endl;
    cout << "Vector1 - index 1 - " << vector1.at(1)<<endl;
    cout << "Vector1 - size - " << vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nVector2 - index 0 - " << vector2.at(0)<<endl;
    cout << "Vector2 - index 1 - " << vector2.at(1)<<endl;
    cout << "Vector2 - size - " << vector2.size()<<endl;

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\nVector_2d -" <<endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1)<<endl;
    cout << vector_2d.at(1).at(0)<< " " << vector_2d.at(1).at(1)<<endl;

    vector1.at(0) = 1000;

    cout << "\nVector_2d -" <<endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1)<<endl;
    cout << vector_2d.at(1).at(0)<< " " << vector_2d.at(1).at(1)<<endl;

    cout << "\nVector1 - index 0 - " << vector1.at(0)<<endl;
    cout << "Vector1 - index 1 - " << vector1.at(1)<<endl;
    return 0;
}