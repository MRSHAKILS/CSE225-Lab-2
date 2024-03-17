#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr
{
private:
    int *data;
    int size;
public:
    dynArr(); //default constructor
    dynArr(int); //parameterized constructor
    ~dynArr(); //destructor
    void setValue(int, int);
    int getValue(int);
};
#endif // DYNARR_H_INCLUDED
