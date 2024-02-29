#include <iostream>
using namespace std;

class Rational {
private:
    int p;
    int q;

public:
    Rational(int num = 1, int den = 1) {
        p = num;
        q = den;
    }

    Rational(const Rational &r) {
        p = r.p;
        q = r.q;
    }
    void set_p(int num) {
        p = num;
    }

    void set_q(int den) {
        if (den == 0) {
            q = 1;
        } 
        q = den;  // Fix: Assign to q, not den
        
    }

    int get_p() {
        return p;
    }

    int get_q() {
        return q;
    }
    

    Rational operator+(Rational r) {
        if (p==0 && q==0){
            return r;
        }
        Rational t;
        t.p = p * r.q + q * r.p;
        t.q = q * r.q;
        return t;
    }

    friend ostream &operator<<(ostream &output, Rational &r);
};

ostream &operator<<(ostream &output, Rational &r) {
    output << r.p << "/" << r.q ;
    return output;
}

int main() {
    Rational r1(1, 5);
    Rational r2(4, 5);
    Rational r3;
    Rational r4;
    r4.set_p(7);
    r4.set_q(9);
    cout<<r4<<endl;
     Rational r5;
    r5=r4+r1;


    r3 = r1 + r2;
    cout << r1 << " + " << r2 << " = " << r3 << endl;
     cout << r1 << " + " << r4 << " = " << r5 << endl;
}
