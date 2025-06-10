#ifndef  __PDF_DOCUMENT_CREATOR_H__
# define __PDF_DOCUMENT_CREATOR_H__

# include "DocumentCreator.h" // Include the base class header

# include <memory> // For std::unique_ptr

# include "PDFDocument.h" // For PDFDocument

// Forward declaration of the IDocument interface
class IDocument;

class PDFDocumentCreator : public IDocumentCreator
{
public:
    // Constructor
    PDFDocumentCreator() = default;

    // Destructor
    virtual ~PDFDocumentCreator() = default;

    // Implementation of the pure virtual function from IDocumentCreator
    std::unique_ptr<IDocument> createDocument() const override
    {
        // Create and return a new PDFDocument instance
        return std::make_unique<PDFDocument>();
    }
};

#endif // __PDF_DOCUMENT_CREATOR_H__