#include <iostream>

#include "FinanceManager.h"

int main() {
    FinanceManager obj;
    
    try {
        Transaction t1(100000, TransactionType::Income, "Job", "Salary");
        Transaction t2(25000, TransactionType::Expense, "Food", "Dinner");
        Transaction t3(15000, TransactionType::Expense, "Food", "Lunch");

        obj.addTransaction(t1);
        obj.addTransaction(t2);
        obj.addTransaction(t3);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    } catch (...) {
        std::cerr << "Unknown error\n";
        return 1;
    }

    std::cout << "Total Income:   \t" << obj.getTotalIncome() << '\n';
    std::cout << "Total Expenses: \t" << obj.getTotalExpenses() << '\n';
    std::cout << "Balance:        \t" << obj.getBalance() << '\n';

    return 0;
}