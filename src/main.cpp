#include <iostream>
#include <cmath>

class Symbol {
    public: 
        Symbol() {
        }
};

class Add : Symbol {
    public:
        double a = 0.;
        double b = 0.;
        
        Add(double _a, double _b) {
            a = _a;
            b = _b;
        }

        double get_value() {
            return a + b;
        }
};


// double _equals(double a, double b) {
//     return a == b;
// }

// double _floor(double a) {
//     return floor(a);
// }

// double _ceil(double a) {
//     return ceil(a);
// }

// double

double (*din_dout[])(double) = {
    &cos,
    &sin,
    &tan,
    &acos,
    &asin,
    &atan,

    &cosh,
    &sinh,
    &tanh,
    &acosh,
    &asinh,
    &atanh,

    &exp,
    &log,
    &log10,
    // &exp2,
    // &expm1,
    // &log1p,
    // &log2,
    // &logb,

    &sqrt,
    &cbrt,

    // &erf,
    // &erfc,
    // &tgamma,
    // &lgamma,

    &ceil,
    &floor,
    // &trunc,
    &round,
    // &rint,
    // &nearbyint,
    &fabs,
};

double add(double a, double b){
    return a + b;
};

double mul(double a, double b){
    return a * b;
};

double div(double a, double b){
    return a / b;
};

double (*ddin_dout[])(double, double) = {
    &add,
    &mul,
    &div,

    &pow,
    
    &fdim,
    &fmax,
    &fmin,
};

//---------------

// double val = (*symbol_list[0])(10, 10);

// class Branch {
//     public:
//         Branch() {

//         }

//         Symbol symbol();
    
//     private:
//         Symbol generate_random_symbol() {
//             int rand_int = rand() % (sizeof(symbol_list) / sizeof(int));
//             return symbol_list[rand_int];
//         }
// };

int main(int, char**) {

    //  std::cout << aaa;

    return 0;
}
