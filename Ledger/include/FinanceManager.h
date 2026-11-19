#pragma once

#include <vector>
#include <cstdint>

#include "Transaction.h"

class FinanceManager {
private:
    std::vector<Transaction> transactions;

public:
    void addTransaction(const Transaction& transaction);
    void displayTransactions() const;
    
    int64_t getTotalIncome() const;
    int64_t getTotalExpenses() const;
    int64_t getBalance() const;
};