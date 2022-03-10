#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char selection{};
    vector<int> vect{};
    do
    {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "N - Display count of a number" << endl;
        cout << "C - Clear List" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice ";
        cin >> selection;

        switch (selection)
        {
        case 'p':
        case 'P':
            if (vect.size() == 0)
                cout << "\n[] - the list is empty" << endl;
            else
            {
                cout << "\n[ ";
                for (auto vec : vect)
                {
                    cout << vec << " ";
                }
                cout << "]" << endl;
            }
            break;
        case 'a':
        case 'A':
            cout << "\nEnter a number to be added : ";
            int temp;
            cin >> temp;
            vect.push_back(temp);
            cout << temp << " added" << endl;
            break;
        case 'm':
        case 'M':
            if (vect.size() == 0)
                cout << "\nUnable to calculate the mean - no data" << endl;
            else
            {
                int mean{0};
                for (auto vec : vect)
                {
                    mean += vec;
                }
                cout << "\nThe mean is " << static_cast<double>(mean)/vect.size() << endl;
            }
            break;
        case 's':
        case 'S':
            if (vect.size() == 0)
                cout << "\nUnable to determine the smallest number - list is empty" << endl;
            else
            {
                int smallest = INT_MAX;
                for (auto vec : vect)
                {
                    if (vec < smallest)
                    {
                        smallest = vec;
                    }
                }
                cout << "\nThe smallest element is " << smallest << endl;
            }
            break;
        case 'l':
        case 'L':
            if (vect.size() == 0)
                cout << "\nUnable to determine the largest number - list is empty" << endl;
            else
            {
                int largest = INT_MIN;
                for (auto vec : vect)
                {
                    if (vec > largest)
                    {
                        largest = vec;
                    }
                }
                cout << "\nThe largest element is " << largest << endl;
            }
            break;
        case 'n':
        case 'N':
            if (vect.size() == 0)
                cout << "\nUnable to determine the count - list is empty" << endl;
            else
            {
                cout << "\nEnter the number to search ";
                int num;
                cin >> num;
                int count{0};
                for (auto vec : vect)
                {
                    if (vec == num)
                    {
                        count++;
                    }
                }
                if (!count)
                    cout << "\nThe " << num << " is not present in the list." << endl;
                else
                    cout << "\nThe " << num << " appears " << count << " times in the list." << endl;
            }
            break;
        case 'c':
        case 'C':
            vect.clear();
            cout << "\nList cleared.." << endl;
            break;
        case 'q':
        case 'Q':
            break;
        default:
            cout << "\nUnknown selection, please try again" << endl;
        }
    } while (selection != 'q' && selection != 'Q');
    cout << "\nGoodBye" << endl;
    return 0;
}
