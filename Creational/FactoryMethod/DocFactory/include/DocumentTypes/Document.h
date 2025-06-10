#ifndef  __DOCUMENT_H__
# define __DOCUMENT_H__

class IDocument
{
public:
    virtual ~IDocument() = default;

    // Pure virtual function to be implemented by derived classes
    virtual void print() const = 0;

    // Additional functionality can be added here
    virtual void save() const = 0;

    // Function to get the type of document
    virtual const char* getType() const = 0;
};

#endif // __DOCUMENT_H__