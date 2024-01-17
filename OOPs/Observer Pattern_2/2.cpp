#include <bits/stdc++.h>
using namespace std;

class Observer
{
public:
    virtual void update(const string &stockSymbol, double stockPrice) = 0;
};

class Subject
{
public:
    virtual void addObserver(Observer *observer) = 0;
    virtual void removeObserver(Observer *observer) = 0;
    virtual void notifyObservers() const = 0;
};

class StockMarket : public Subject
{

private:
    unordered_map<string, double> stockPrices;
    vector<Observer *> observers;

public:
    void setStockPrice(const string &stockSymbol, double stockPrice)
    {
        stockPrices[stockSymbol] = stockPrice;
        notifyObservers();
    }

    void addObserver(Observer *observer) override
    {
        observers.push_back(observer);
    }

    void removeObserver(Observer *observer) override
    {
        auto it = find(observers.begin(), observers.end(), observer);
        if (it != observers.end())
        {
            observers.erase(it);
        }
    }

    void notifyObservers() const override
    {
        for (const auto &observer : observers)
        {
            observer->update("StockMarket", 0.0);
        }
    }

    double getStockPrice(const string &stockSymbol) const
    {
        auto it = stockPrices.find(stockSymbol);
        return (it != stockPrices.end()) ? it->second : 0.0;
    }
};

class StockViewer : public Observer
{

private:
    string name;
    double lastStockPrice;

public:
    StockViewer(const string &name) : name(name), lastStockPrice(0.0) {}

    void update(const string &stockSymbol, double stockPrice) override
    {
        lastStockPrice = stockPrice;
        cout << "StockViewer " << name << " received update. Stock price for " << stockSymbol
             << ": " << lastStockPrice << endl;
    }

    double getLastStockPrice() const
    {
        return lastStockPrice;
    }
};

int main()
{

    StockMarket stockMarket;

    StockViewer viewer1("Viewer1");
    StockViewer viewer2("Viewer2");

    stockMarket.addObserver(&viewer1);
    stockMarket.addObserver(&viewer2);

    stockMarket.setStockPrice("AAPL", 150.0);
    stockMarket.setStockPrice("GOOGL", 2500.0);

    cout << "\nLast stock prices for viewers:" << endl;
    cout << "Viewer1: " << viewer1.getLastStockPrice() << endl;
    cout << "Viewer2: " << viewer2.getLastStockPrice() << endl;

    stockMarket.removeObserver(&viewer1);
    stockMarket.setStockPrice("AAPL", 160.0);

    cout << "\nLast stock prices for remaining viewers:" << endl;
    cout << "Viewer1: " << viewer1.getLastStockPrice() << " (observer removed)" << endl;
    cout << "Viewer2: " << viewer2.getLastStockPrice() << endl;

    return 0;
}
