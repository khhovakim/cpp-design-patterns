#ifndef  __DOCUMENT_CREATOR_H__
# define __DOCUMENT_CREATOR_H__

# include <memory> // For std::unique_ptr

// Forward declaration of the IDocument interface
class IDocument;

class IDocumentCreator
{
public:
    // Virtual destructor to ensure proper cleanup of derived classes
    virtual ~IDocumentCreator() = default;

    // Pure virtual function to create a document
    virtual std::unique_ptr<IDocument> createDocument() const = 0;
};

#endif // __DOCUMENT_CREATOR_H__