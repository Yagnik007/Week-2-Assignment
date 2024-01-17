#include <bits/stdc++.h>
using namespace std;

class FileSystemComponent
{
public:
    virtual void display() const = 0;
};

class File : public FileSystemComponent
{
public:
    File(const string &name) : name(name) {}

    void display() const override
    {
        cout << "File: " << name << endl;
    }

private:
    string name;
};

class Directory : public FileSystemComponent
{
public:
    Directory(const string &name) : name(name) {}

    void add(FileSystemComponent *component)
    {
        components.push_back(component);
    }

    void remove(FileSystemComponent *component)
    {
        auto it = find(components.begin(), components.end(), component);
        if (it != components.end())
        {
            components.erase(it);
        }
    }

    void display() const override
    {
        cout << "Directory: " << name << endl;
        for (const auto &component : components)
        {
            component->display();
        }
    }

private:
    string name;
    vector<FileSystemComponent *> components;
};

int main()
{

    File *file1 = new File("Document1.txt");
    File *file2 = new File("Image.jpg");

    Directory *rootDirectory = new Directory("Root");
    rootDirectory->add(file1);
    rootDirectory->add(file2);

    Directory *subDirectory = new Directory("Subfolder");
    subDirectory->add(rootDirectory);

    cout << "Displaying the file system:" << endl;
    subDirectory->display();

    delete subDirectory;

    return 0;
}
