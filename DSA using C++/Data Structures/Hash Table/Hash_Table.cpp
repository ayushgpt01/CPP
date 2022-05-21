#include <iostream>
#include <list>
using namespace std;

class HashTable
{
    static const int tableSize = 10;
    list<pair<int, string>> table[tableSize];

public:
    bool isEmpty() const;
    int hashFunction(int key);
    void insertItem(int key, string value);
    void removeItem(int key);
    string searchTable(int key);
    void printTable() const;
};

bool HashTable::isEmpty() const
{
    int sum{};
    for (int i{}; i < tableSize; i++)
    {
        sum += table[i].size();
    }
    if (sum)
        return false;
    return true;
}

int HashTable::hashFunction(int key)
{
    return key % tableSize;
}

void HashTable::insertItem(int key, string value)
{
    int hash = hashFunction(key);
    auto &item = table[hash];
    auto listIter = item.begin();
    bool keyExists{false};
    for (; listIter != item.end(); listIter++)
    {
        if (listIter->first == key)
        {
            keyExists = true;
            cout << "Key already exists with value " << listIter->second << "\nDo you want to replace the value? (Y/N) ";
            char ch;
            cin >> ch;
            if (ch == 'Y' || ch == 'y')
            {
                listIter->second = value;
                cout << "Value Changed Successfully\n";
            }
            else
                cout << "Previous Value retained\n";
            break;
        }
    }
    if (!keyExists)
    {
        item.emplace_back(key, value);
        cout << "Pair Entered\n";
    }
}

void HashTable::removeItem(int key)
{
    int hash = hashFunction(key);
    auto &item = table[hash];
    bool keyExists{false};
    for (auto listIter = item.begin(); listIter != item.end(); listIter++)
    {
        if (listIter->first == key)
        {
            keyExists = true;
            cout << "Deleting Pair ( " << listIter->first << " , " << listIter->second << " )\n";
            listIter = item.erase(listIter);
            cout << "Item removed\n";
            break;
        }
    }
    if (!keyExists)
    {
        cout << "Key doesn't exist. Pair not removed\n";
    }
}

string HashTable::searchTable(int key)
{
    int hash = hashFunction(key);
    for(auto item : table[hash])
    {
        if(item.first == key)
        {
            cout << "Found key. Value is " << item.second << endl;
            return item.second;
        }
    }
    cout << "Key not Found\n";
    return "Not Found";
}

void HashTable::printTable() const
{
    int j{};
    for(int i{};i<tableSize;i++)
    {
        if(table[i].empty())
            continue;
        for(auto item : table[i])
        {
            cout << ++j << ". ( " << item.first << " , " << item.second << " ) " << endl;
        }
    }
}

int main()
{
    HashTable t;
    if(t.isEmpty())
        cout << "Table is Empty.\n";
    else
        cout << "This shouldn't run\n";
    t.printTable();
    t.insertItem(41,"LC");
    t.insertItem(149,"SF");
    t.insertItem(765,"AM");
    t.insertItem(9,"DR");
    t.insertItem(134,"DP");
    t.insertItem(876,"ES");
    t.insertItem(124,"FV");
    t.printTable();
    t.searchTable(41);
    t.removeItem(149);
    t.removeItem(124);
    t.removeItem(134);
    t.removeItem(9);
    t.removeItem(765);
    t.printTable();
    if(t.isEmpty())
        cout << "Table is Empty. but this shouldn't run\n";
    else
        cout << "Table is not empty\n";
    return 0;
}