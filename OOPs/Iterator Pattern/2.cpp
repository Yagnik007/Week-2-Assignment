#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Iterator
{
public:
    virtual bool hasNext() const = 0;
    virtual T next() = 0;
};

template <typename T>
class VectorIterator : public Iterator<T>
{
public:
    VectorIterator(const vector<T> &data) : data_(data), position_(0) {}

    bool hasNext() const override
    {
        return position_ < data_.size();
    }

    T next() override
    {
        if (!hasNext())
        {
            throw out_of_range("No more elements");
        }
        return data_[position_++];
    }

private:
    const vector<T> &data_;
    size_t position_;
};

template <typename T>
class Aggregate
{
public:
    virtual Iterator<T> *createIterator() const = 0;
};

template <typename T>
class SimpleVector : public Aggregate<T>
{
public:
    Iterator<T> *createIterator() const override
    {
        return new VectorIterator<T>(data_);
    }

    void add(const T &element)
    {
        data_.push_back(element);
    }

private:
    vector<T> data_;
};

int main()
{
    SimpleVector<int> simpleVector;
    simpleVector.add(1);
    simpleVector.add(2);
    simpleVector.add(3);

    Iterator<int> *iterator = simpleVector.createIterator();

    while (iterator->hasNext())
    {
        cout << iterator->next() << " ";
    }

    delete iterator;

    return 0;
}
