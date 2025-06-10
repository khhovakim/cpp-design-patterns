#ifndef  __PDF_DOCUMENT_H__
# define __PDF_DOCUMENT_H__

# include "Document.h" // Include the base class header

# include <iostream>   // For std::cout

class PDFDocument : public IDocument
{
public:
    // Constructor
    PDFDocument() = default;

    // Destructor
    virtual ~PDFDocument() = default;

    // Implementation of the pure virtual function from IDocument
    void print() const override
    {
        // Implementation for printing a PDF document
        std::cout << "Printing PDF Document." << std::endl;
    }

    // Implementation of the save function from IDocument
    void save() const override
    {
        // Implementation for saving a PDF document
        std::cout << "Saving PDF Document." << std::endl;
    }

    // Function to get the type of document
    const char* getType() const override
    {
        return "PDF Document";
    }
};

#endif // __PDF_DOCUMENT_H__