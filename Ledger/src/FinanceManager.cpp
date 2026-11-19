#include "FinanceManager.h"

#include <iostream>

void FinanceManager::addTransaction(const Transaction& transaction) {
    transactions.push_back(transaction);
}

void FinanceManager::displayTransactions() const {
    std::cout << "\n========== TRANSACTION HISTORY ==========\n\n";

    if (transactions.empty()) {
        std::cout << "\nTransaction History is Empty!\n";
        return;
    }
    
    int i = 1;
    for (const auto& transaction : transactions) {
        std::cout << "#" << i << '\n';
        std::cout << "Type: ";
        
        if (transaction.getType() == TransactionType::Income)
            std::cout << "Income\n";
        else
            std::cout << "Expense\n";

        std::cout << "Amount: " << transaction.getAmount() << '\n';
        std::cout << "Category: " << transaction.getCategory() << '\n';
        std::cout << "Description: " << transaction.getDescription() << '\n';
        ++i;
    }
}

int64_t FinanceManager::getTotalIncome() const {
    int64_t totalIncome = 0;

    for (const auto& transaction : transactions)
        if (transaction.getType() == TransactionType::Income)
            totalIncome += transaction.getAmount();

    return totalIncome;
}

int64_t FinanceManager::getTotalExpenses() const {
    int64_t totalExpense = 0;
    
    for (const auto& transaction : transactions)
        if (transaction.getType() == TransactionType::Expense)
            totalExpense += transaction.getAmount();

    return totalExpense;
}

int64_t FinanceManager::getBalance() const {
    return getTotalIncome() - getTotalExpenses();
}