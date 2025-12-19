#include <iostream>
using namespace std;
struct Complex{
    double r;
    double v;
    public: 
        Complex():
            r(0.0),
            v(0.0)
        {};

        Complex(double r, double v):
            r(r),
            v(v)
        {};

        Complex add(Complex z1) const {
            return Complex(r + z1.r, v + z1.v);
        };

        Complex product(Complex z) const {
            return Complex((r * z.r) - (v*z.v), (r * z.r) + (v*z.v));
        };
};
int main(){
    Complex z1(3.0, 4.0); 
    Complex z2(1.0, 2.0); 
    Complex z3 = z1.add(z2);
    cout << z3.r << endl;
}
