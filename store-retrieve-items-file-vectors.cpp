#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Item {
public:
    string name;
    float price;
    int qty;
    
    Item() {}
    Item(string n, float p, int q) : name(n), price(p), qty(q) {}

    friend ofstream & operator <<(ofstream &ofs, const Item &i);
    friend ifstream & operator >>(ifstream &ifs, Item &i);
   // friend ostream & operator <<(ostream &os, const Item &i);
};

ofstream & operator <<(ofstream &ofs, const Item &i) {
    ofs << i.name << endl;
    ofs << i.price << endl;
    ofs << i.qty << endl;
    return ofs;
}

ifstream & operator >>(ifstream &ifs, Item &i) {
    ifs >> i.name >> i.price >> i.qty;
    return ifs;
}

/*ostream & operator <<(ostream &os, const Item &i) {
    os << i.name << endl << i.price << endl << i.qty << endl;
    return os;
}*/

int main() {
    int n;
    string name;
    float price;
    int qty;
    
    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> list_of_items;

   for(int i = 0; i < n; i++) {
    cout << "Enter " << i + 1 << " Item Name, price, and Quantity: ";
    cin >> name >> price >> qty;
    list_of_items.push_back(Item(name, price, qty));  
}


   ofstream ofs("Items.txt");
    vector<Item>::iterator itr;
    for (itr = list_of_items.begin(); itr != list_of_items.end(); ++itr) {
        ofs << *itr;
    }
    ifstream ifs("Items.txt");
    Item item;
    
    for(int i = 0; i < n; i++) {
        ifs >> item;
        cout << "Item " << i +1<< endl << item.name<< endl<<item.price<<endl<<item.qty<<endl;
    }

    return 0;
}
