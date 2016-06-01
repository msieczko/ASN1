#ifndef ASNINTEGER_H
#define ASNINTEGER_H

#include "ASNIntEnum.h"

//! ASN.1 INTEGER data type
class ASNInteger : public ASNIntEnum
{
public:
    //! Standard constructor
    /*! Creates new object with appropriate length
        \param n : number to be saved in object */
    ASNInteger(int n=0): ASNIntEnum(2, n) {}
};

#endif // ASNINTEGER_H
