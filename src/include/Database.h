#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database
{
    private:
    protected:

    public:
    vector<vector<string>> mainList;
    string name;

    Database()
    {
        //Constructor
    }

    void write(vector<vector<string>> mainList);
    vector<vector<string>> read();

    ~Database()
    {
        //Destructor
    }   

};