#include <iostream>
#include <limits>
#include <map>
using std::cout;
using std::endl;
using std::map;

class Room_Data
{
      public:
             Room_Data() {cout<<"Construct"<<endl;}
             ~Room_Data() {cout<<"Destruct"<<endl;}
             char*        name;
             int          vnum;
};

int main()
{
    
    Room_Data* pRoom = new Room_Data();
    pRoom->vnum = 2400;
    
    map<int, Room_Data*> rMap;
    map<int, Room_Data*>::reverse_iterator iter;
    
    rMap[pRoom->vnum] = pRoom;

    
    for ( iter = rMap.rbegin() ; iter != rMap.rend(); iter++ )
    {
       cout << '\t' << iter->first << '\t' << iter->second
                 << '\n';
        }

    // cout<<pRoom->vnum<<endl;
    cout << "Press ENTER to quit." << std::flush;
    std::cin.ignore( std::numeric_limits <std::streamsize> ::max(), '\n' );
    return 0;
}