#include <iostream>

const char upper_modulo = ['a','a','a',
                           'a','a','a',
                           'a','a','a',
                           'a','a','a'];
const char lower_modulo = ['a','a','a'
                           'a','b','c'
                           'a','c','e'
                           'a','d','g'];

char Multiply(const int ary, const char c1, const char c2)
{
    int tmp = 26 * (c1 - 97) + (c2 - 97);
}

int main()
{
    return 0;
}

/*
 * 2진법: 00 = 00, 01 = 00, 10 = 00, 11 = 01
 * 0, 0, 0, 1
 * 3진법: 00 = 00, 01 = 00, 02 = 00, 10 = 00, 11 = 01, 12 = 02, 20 = 00, 21 = 02, 22 = 11
 * 0, 0, 0, 0, 1, 2, 0, 2, 1
 * a, ..., a, a, ..., z, a, c, e, ..., x, ...
 * 
*/