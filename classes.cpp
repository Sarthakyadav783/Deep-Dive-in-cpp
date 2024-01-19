#include <iostream>
using namespace std;
/**Classes Type of functions:
 * 1. Constructors
 * 2.Accessors
 * 3.Mutators
 * 4.Facilitators
 * 5. Enquiry
 * 6. Destructors : ~Rectangle()
*/
class Rectangle{
    private:
        int length;
        int breadth;
    public:
    //Property function
    //accessor : get xxx
    // mutator setxxx
        void setlength(int l){
            if (l>=0){
            length=l;
            }
            else {
                length=0;
            }
        
        }
        void setbreadth(int b){
            if (b>=0){
            breadth=b;
            }
            else {
                breadth=0;
            }
        }
        int getlength(){
            return length;
        }
        int getbreadth(){
            return breadth;
        }

        int area(){//facilitators
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);

        }
    };
int main(){
    Rectangle r1;
    r1.setlength(-10);
    r1.setbreadth(5);
    cout<<r1.area()<<endl;
    cout<<r1.getlength()<<endl;
    cout<<r1.getbreadth()<<endl;

}