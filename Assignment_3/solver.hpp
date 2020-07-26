#include <stdio.h>
#include <complex>

namespace solver {
    class RealVariable {
    private:
        double re;
        double x;
        double x2;
    public:
        RealVariable(double _x2 = 0, double _x = 1, double _re = 0) : re(_re), x(_x), x2(_x2) {}// normal constructor
        RealVariable(const RealVariable &rv) : x2(rv.x2), x(rv.x), re(rv.re) {}// copy constructor
        double getx2() const { return this->x2; }

        double getx() const { return this->x; }

        double getre() const { return this->re; }

        RealVariable operator-(double a) {
            RealVariable rv(this->getx2(), this->getx(), this->getre() - a);
            return rv;
        }

        RealVariable &operator=(const RealVariable &a) {
            x2 = a.x2;
            x = a.x;
            re = a.re;
            return *this;
        }

// we better return a reference since we haven't implemented a copy constructor
// although compilers have their own version of copy constructor for trivial objects
/*
 * just a tiny note : i know this is a totally primitive implementation , since i wan't aware of implicit conversions at the time i solved the assignment
 *  i would've implemented it better using friend RealVariable operator *(const RealVariable &first ,const RealVariable &second) + implicit conversion by the help of constructor
 *  that would've saved me half the coding & effort :/ sorry
 */
        friend RealVariable operator*(double a, const RealVariable &f);

        friend RealVariable operator*(const RealVariable &f, double a);

        friend RealVariable operator*(const RealVariable &f, const RealVariable &g);

        friend RealVariable operator-(const RealVariable &f, double a);

        friend RealVariable operator-(const RealVariable &f, const RealVariable &e);

        friend RealVariable operator-(double a, const RealVariable &f);

        friend RealVariable operator/(const RealVariable &h, double e);

        friend RealVariable operator^(const RealVariable &f, double a);

        friend RealVariable operator+(const RealVariable &x, const RealVariable &f);

        friend RealVariable operator+(const RealVariable &x, double a);

        friend RealVariable operator+(double a, const RealVariable &x);

        friend RealVariable operator==(const RealVariable &a, const RealVariable &b);

        friend RealVariable operator==(const RealVariable &a, double e);
    };
//-----------------------------------------------------------------------------------------------------------------------
    class ComplexVariable {
    public:
        RealVariable var;
        std::complex<double> imag;

        ComplexVariable(const ComplexVariable &f) : var(f.var.getx2(), f.var.getx(), f.var.getre()), imag(f.imag) {}

        ComplexVariable(double x2 = 0, double x = 1, double re = 0, std::complex<double> a = (0, 0)) : var(x2, x, re),
                                                                                                       imag(a) {}

        ComplexVariable(const RealVariable &f) : var(f), imag((0, 0)) {}

        ComplexVariable &operator=(const ComplexVariable &a) {
            this->var = a.var;
            this->imag = a.imag;
            return *this;
            /*
             * allows chaining
             */
        }

        friend ComplexVariable operator*(double a, const ComplexVariable &f);

        friend ComplexVariable operator*(const ComplexVariable &f, double a);

        friend ComplexVariable operator*(const ComplexVariable &f, const ComplexVariable &g);

        friend ComplexVariable operator-(const ComplexVariable &f, double a);

        friend ComplexVariable operator-(const ComplexVariable &f, const ComplexVariable &e);

        friend ComplexVariable operator-(double a, const ComplexVariable &f);

        friend ComplexVariable operator/(const ComplexVariable &h, double e);

        friend ComplexVariable operator^(const ComplexVariable &f, double a);

        friend ComplexVariable operator+(const ComplexVariable &x, const ComplexVariable &f);

        friend ComplexVariable operator+(const ComplexVariable &x, double a);

        friend ComplexVariable operator+(double a, const ComplexVariable &x);

        friend ComplexVariable operator==(const ComplexVariable &a, const ComplexVariable &b);

        friend ComplexVariable operator==(const ComplexVariable &a, double e);

        friend ComplexVariable operator+(const ComplexVariable &a, std::complex<double> comp);

        friend ComplexVariable operator+(std::complex<double> comp, const ComplexVariable &a);
    };
    double solve(RealVariable a);
    std::complex<double> solve(ComplexVariable b);
}
