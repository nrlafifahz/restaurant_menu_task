#include <iostream>  
#include <map> 
#include <iterator>
#include <cstdint>

using namespace std;

class Menu{
    private:
    string name;
    double price;

    public:
    // Menu(string name = {}, double price = 0.0)  {
    //      this->name = name;
    //       this->price = price;
    // }
    Menu(string name = {}, double price = 0.0) : name{name}, price{price} {}

    void setName(string name) {
      this->name = name;
    }

    string getName() {
      return name;
    }

    void setPrice(double price) {
      this->price = price;
    }

    double getPrice() {
      return price;
    }
};
void foods(){
    map<int, Menu*> food;
    food.insert(pair<int, Menu*>(1, new Menu ("Hamburger", 35000)));
    food.insert(pair<int, Menu*>(2, new Menu ("Sate Padang", 45000)));
    food.insert(pair<int, Menu*>(3, new Menu ("Fried Chicken", 15000)));
    food.insert(pair<int, Menu*>(4, new Menu ("Rendang Beef", 55000)));
    food.insert(pair<int, Menu*>(5, new Menu ("Fish n Chips", 65000)));

    map<int, Menu*>::iterator iter;
   
    for ( iter = food.begin() ; iter != food.end(); iter++ )
    {
       cout << '\t' << iter->first << '\t' << iter->second->getName() << '\t' << '\t' << "Rp."<< iter->second->getPrice()
                 << '\n';
        }

};

void drinks(){
    map<int, Menu*> drink;
    drink.insert(pair<int, Menu*>(1, new Menu ("Hamburger", 35000)));
    drink.insert(pair<int, Menu*>(2, new Menu ("Sate Padang", 45000)));
    drink.insert(pair<int, Menu*>(3, new Menu ("Fried Chicken", 15000)));
    drink.insert(pair<int, Menu*>(4, new Menu ("Rendang Beef", 55000)));
    drink.insert(pair<int, Menu*>(5, new Menu ("Fish n Chips", 65000)));

    map<int, Menu*>::iterator iter;
   
    for ( iter = drink.begin() ; iter != drink.end(); iter++ )
    {
       cout << '\t' << iter->first << '\t' << iter->second->getName() << '\t' << '\t' << "Rp."<< iter->second->getPrice()
                 << '\n';
        }

};


int main(){
   
   

    
    return 0;

}