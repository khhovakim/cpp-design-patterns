//
// Created by khovakim on 8/11/25.
//

#ifndef   PRINTERADAPTER_H
# define  PRINTERADAPTER_H

# include "IPrinter.h"    // For IPrinter
# include "oldPrinter.h"  // For OldPrinter

class PrinterAdapter: public IPrinter
{
public:
    explicit PrinterAdapter(OldPrinter* oldPrinter)
        : m_oldPrinter{oldPrinter} { }

    ~PrinterAdapter() override = default;

    void print() const noexcept override {
        m_oldPrinter->oldPrint();
    }

private:
    OldPrinter* m_oldPrinter;
};

#endif // PRINTERADAPTER_H