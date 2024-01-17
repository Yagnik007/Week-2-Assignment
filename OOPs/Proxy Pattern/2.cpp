#include <bits/stdc++.h>
using namespace std;

class Image
{
public:
    virtual void display() = 0;
};

class RealImage : public Image
{
private:
    string filename;

public:
    RealImage(const string &filename) : filename(filename)
    {
        loadImageFromDisk();
    }

    void loadImageFromDisk()
    {
        cout << "Loading image: " << filename << "\n";
    }

    void display()
    {
        cout << "Displaying image: " << filename << "\n";
    }
};

class ProxyImage : public Image
{
private:
    RealImage *realImage;
    string filename;

public:
    ProxyImage(const string &filename) : realImage(nullptr), filename(filename) {}

    void display()
    {
        if (!realImage)
        {
            realImage = new RealImage(filename);
        }
        realImage->display();
    }
};

int main()
{
    Image *i1 = new ProxyImage("Sample.jpeg");
    Image *i2 = new ProxyImage("Sample2.jpeg");
    i1->display();
    i2->display();
    i1->display();
}