#pragma once

#include <cstdint>
#include <string>

enum class TransactionType {
    Income,
    Expense
};

class Transaction {
private:
    int64_t amount{};
    TransactionType type{TransactionType::Expense};
    std::string category{};
    std::string description{};

public:
    Transaction(int64_t amount,
                TransactionType type,
                const std::string& category,
                const std::string& description);

    // Getters - Declaration
    int64_t getAmount() const;
    TransactionType getType() const;
    const std::string& getCategory() const;
    const std::string& getDescription() const;
};