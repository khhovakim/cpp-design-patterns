//
// Created by khovakim on 8/11/25.
//

#ifndef   OLDPRINTER_H
# define  OLDPRINTER_H

# include <iostream>  // For std::cout

class OldPrinter
{
public:
    void oldPrint() const noexcept {
        std::cout << "[OldPrinter] Printing using old system...\n";
    }
};

#endif // OLDPRINTER_H