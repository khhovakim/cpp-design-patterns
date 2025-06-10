#include <iostream> // For std::cout
#include <memory>   // For std::unique_ptr

#include "Document.h"            // For Document interface
#include "DocumentCreator.h"     // For DocumentCreator
#include "PDFDocumentCreator.h"  // For PDFDocumentCreator
#include "WordDocumentCreator.h" // For WordDocumentCreator

namespace {
    void showDocument(const std::unique_ptr<IDocumentCreator>& creator) {
        std::unique_ptr<IDocument> doc = creator->createDocument();
        std::cout << "\n📄 Type: " << doc->getType() << "\n";
        doc->print();
        doc->save();
    }

    template <typename CreatorType>
    void startCreatingDocument() {
        std::unique_ptr<IDocumentCreator> creatorPtr = std::make_unique<CreatorType>();
        // Use a smart pointer to manage the creator's lifetime
        showDocument(creatorPtr);
        std::cout << "Document creation completed.\n\n";
    }
}

int main() {
    while (true) {
        std::cout << "=== DocFactory ===\n";
        std::cout << "1. Create PDF Document\n";
        std::cout << "2. Create Word Document\n";
        std::cout << "0. Exit\n";
        std::cout << "Select option: ";

        int choice;
        std::cin >> choice;

        switch ( choice ) {
            case 1: {
                // Use the template function to create a PDF document
                startCreatingDocument<PDFDocumentCreator>();
                break;
            }
            case 2: {
                // Use the template function to create a Word document
                startCreatingDocument<WordDocumentCreator>();
                break;
            }
            case 0:
                return 0;
            default:
                std::cout << "Invalid choice!\n";
        }
    }
}
