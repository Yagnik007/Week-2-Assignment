#include <bits/stdc++.h>
using namespace std;

class Mediator;

class Colleague {
protected:
    Mediator* mediator;
public:
    Colleague(Mediator* m) : mediator(m) {}
    virtual void send(string) = 0;
    virtual void notify(string) = 0;
};

class Mediator {
public:
    virtual void send(string, Colleague*) = 0;
};

class ConcreteMediator : public Mediator {
    class Colleague* colleague1;
    class Colleague* colleague2;
public:
    void setColleague1(Colleague* c1) { colleague1 = c1; }
    void setColleague2(Colleague* c2) { colleague2 = c2; }
    void send(string message, Colleague* colleague) override {
        if (colleague == colleague1) {
            colleague2->notify(message);
        } else {
            colleague1->notify(message);
        }
    }
};

class ConcreteColleague1 : public Colleague {
public:
    ConcreteColleague1(Mediator* m) : Colleague(m) {}
    void send(string message) override {
        mediator->send(message, this);
    }
    void notify(string message) override {
        cout << "Colleague1 gets message: " << message << endl;
    }
};

class ConcreteColleague2 : public Colleague {
public:
    ConcreteColleague2(Mediator* m) : Colleague(m) {}
    void send(string message) override {
        mediator->send(message, this);
    }
    void notify(string message) override {
        cout << "Colleague2 gets message: " << message << endl;
    }
};

int main() {
    ConcreteMediator mediator;
    ConcreteColleague1 colleague1(&mediator);
    ConcreteColleague2 colleague2(&mediator);
    mediator.setColleague1(&colleague1);
    mediator.setColleague2(&colleague2);
    colleague1.send("How are you?");
    colleague2.send("I'm fine, thanks!");
    return 0;
}