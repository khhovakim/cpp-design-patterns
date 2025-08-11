//
// Created by khovakim on 8/11/25.
//


#include "printerAdapter.h"

int main() {
	OldPrinter legacyPrinter;
	PrinterAdapter adapter(&legacyPrinter);

	// Client uses the new interface
	IPrinter* printer = &adapter;
	printer->print();

	return 0;
}