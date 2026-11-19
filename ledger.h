#ifndef LEDGER_H
#define LEDGER_H

class Ledger {
private:
    std::string name;
    double balance;

public:
    Ledger();
    ~Ledger();

    void setBalance(double amt);
    void setName(std::string name);

    double getBalance() const;
    std::string getName() const;
};

#endif