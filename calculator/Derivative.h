#ifndef HEADER_DERIVATIVE
#define HEADER_DERIVATIVE

class Derivative{
    private:
        int input;
        int output;
    public:
        Derivative(int in);

        int DPowerRule();

        int DConstantRule();

        int DTrigRule();

        int DExponentRule();

        int DLogRule();

};



#endif