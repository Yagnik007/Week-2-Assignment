#include <bits/stdc++.h>
using namespace std;

class Document
{
public:
    virtual void print() = 0;
};

class PDFDocument : public Document
{
public:
    void print()
    {
        cout << "Printing PDF document.\n";
    }
};

class WordDocument : public Document
{
public:
    void print()
    {
        cout << "Printing Word document.\n";
    }
};

class DocumentFactory
{
public:
    virtual Document *createDocument() = 0;
};

class PDFDocumentFactory : public DocumentFactory
{
public:
    Document *createDocument()
    {
        return new PDFDocument();
    }
};

class WordDocumentFactory : public DocumentFactory
{
public:
    Document *createDocument()
    {
        return new WordDocument();
    }
};

int main()
{

    DocumentFactory *pdfFactory = new PDFDocumentFactory();
    DocumentFactory *wordFactory = new WordDocumentFactory();

    Document *pdfDocument = pdfFactory->createDocument();
    Document *wordDocument = wordFactory->createDocument();

    pdfDocument->print();
    wordDocument->print();

    return 0;
}
