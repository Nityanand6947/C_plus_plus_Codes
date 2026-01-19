/*
-Open-closed Principle(OCP) states that software entities(classes,modules)should be open for extension, but closed for modification.
-SRP is the prerequest of the OCP
-The benefit is simple testing is required to test individual classes, but if you will keep on adding
and modifiying in one class.Then even for the smallest 
*/

//Notes: here you can extend by making derived classess but not modifying

#include <iostream>
#include <string>

// Base class for payment processing
class PaymentProcessor {
public:
    virtual void processPayment(double amount) = 0; // Pure virtual function
};

// Credit card payment processor
class CreditCardPaymentProcessor : public PaymentProcessor {
public:
    void processPayment(double amount) override {
        std::cout << "Processing credit card payment of $" << amount << std::endl;
    }
};

class PayPalPaymentProcessor : public PaymentProcessor {
public:
    void processPayment(double amount) override {
        std::cout << "Processing PayPal payment of $" << amount << std::endl;
    }
};

void processPayment(PaymentProcessor* processor, double amount) {
    processor->processPayment(amount);
}

int main() {
    CreditCardPaymentProcessor creditCardProcessor;
    PayPalPaymentProcessor payPalProcessor;

    processPayment(&creditCardProcessor, 100.00); // Processing credit card payment
    processPayment(&payPalProcessor, 150.00);     // Processing PayPal payment

    return 0;
}
