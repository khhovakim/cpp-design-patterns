//
// Created by khovakim on 8/11/25.
//

#ifndef   IPRINTER_H
# define  IPRINTER_H

class IPrinter
{
public:
    IPrinter() = default;
    virtual ~IPrinter() = default;

    virtual void print() const noexcept = 0;

};

#endif // IPRINTER_H