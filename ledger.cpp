#include <iostream>

#include "ledger.h"

Ledger::Ledger() {
    std::cout << "Ledger created for " << "\"" << this->getName() << "\"" << '\n';
}

Ledger::~Ledger() {
    std::cout << "Destroyed " << "\"" << this->getName() << "\"" << "'s ledger\n";
}

void Ledger::setBalance(double amt) {
    if (amt >= 0)
        this->balance += amt;
}

void Ledger::setName(std::string name) {
    this->name = name;
}

double Ledger::getBalance() const {
    return this->balance;
}

std::string Ledger::getName() const {
    return this->name;
}