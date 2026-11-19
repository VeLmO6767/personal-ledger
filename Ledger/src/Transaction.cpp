#include "Transaction.h"

#include <stdexcept>

Transaction::Transaction(
    int64_t amount,
    TransactionType type,
    const std::string& category,
    const std::string& description)
    :
    amount(amount),
    type(type),
    category(category),
    description(description)
{
    if (amount <= 0)
        throw std::invalid_argument("Please enter a positive number");
}

// Getters - Implementation
int64_t Transaction::getAmount() const {
    return amount;
}

TransactionType Transaction::getType() const {
    return type;
}

const std::string& Transaction::getCategory() const {
    return category;
}

const std::string& Transaction::getDescription() const {
    return description;
}