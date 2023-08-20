#include "include/SimpleApp.h"
#include "include/Database.h"

int main(int arg_count, char *args[])
{
    SimpleApp obj;
    Database data;

    if (arg_count > 1)
    {        
        obj.name = string(args[1]);
        obj.mainList = data.read();
        obj.find_userList();
        obj.print_menu();
        data.write(obj.mainList);
    }
    else
    {
        cout << "Username not supplied..exiting the program " << endl;
    }

    return 0;
}

