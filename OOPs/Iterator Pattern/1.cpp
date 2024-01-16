#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Iterator
{
public:
    virtual bool hasNext() = 0;
    virtual T next() = 0;
};

template <typename T>
class VectorIterator : public Iterator<T>
{
public:
    VectorIterator(vector<T> &data) : data_(data), position_(0) {}

    bool hasNext()
    {
        return position_ < data_.size();
    }

    T next()
    {
        if (!hasNext())
        {
            throw out_of_range("No more elements");
        }
        return data_[position_++];
    }

private:
    vector<T> &data_;
    size_t position_;
};

int main()
{
}
