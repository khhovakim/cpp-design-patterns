#ifndef  __WORD_DOCUMENT_CREATOR_H__
# define __WORD_DOCUMENT_CREATOR_H__

# include "DocumentCreator.h" // Include the base class header

# include <memory> // For std::unique_ptr

# include "WordDocument.h" // For WordDocument

// Forward declaration of the IDocument interface
class IDocument;

class WordDocumentCreator : public IDocumentCreator
{
public:
    // Constructor
    WordDocumentCreator() = default;

    // Destructor
    virtual ~WordDocumentCreator() = default;

    // Implementation of the pure virtual function from IDocumentCreator
    std::unique_ptr<IDocument> createDocument() const override
    {
        // Create and return a new WordDocument instance
        return std::make_unique<WordDocument>();
    }
};
#endif // __WORD_DOCUMENT_CREATOR_H__