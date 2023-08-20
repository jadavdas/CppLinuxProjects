#include <iostream>
#include <vector>
using namespace std;

class SimpleApp
{
    private:
    protected:

    public:
    vector<vector<string>> mainList;
    vector<string> list;
    string name;
    int currentUserIndex;

    SimpleApp()
    {
        //Constructor
    }

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    bool find_userList();
    void save_list();

    
    ~SimpleApp()
    {
        //Destructor
    }

    

};