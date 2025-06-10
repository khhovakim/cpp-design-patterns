#ifndef  __WORD_DOCUMENT_H__
# define __WORD_DOCUMENT_H__

# include "Document.h" // Include the base class header

# include <iostream>   // For std::cout

class WordDocument : public IDocument
{
public:
    // Constructor
    WordDocument() = default;

    // Destructor
    virtual ~WordDocument() = default;

    // Implementation of the pure virtual function from IDocument
    void print() const override
    {
        // Implementation for printing a Word document
        std::cout << "Printing Word Document." << std::endl;
    }

    // Implementation of the save function from IDocument
    void save() const override
    {
        // Implementation for saving a Word document
        std::cout << "Saving Word Document." << std::endl;
    }

    // Function to get the type of document
    const char* getType() const override
    {
        return "Word Document";
    }
};

#endif // __WORD_DOCUMENT_H__