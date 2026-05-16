// Encapsulation is the process of binding data (variables) and the methods (functions) that operate on that data into a single unit (class) and restricting direct access to the data. It helps to protect the data from outside interference and misuse. In encapsulation, the data is hidden from other classes and can only be accessed through member functions of the class.

#include<iostream>
#include<string>
using namespace std;

class Account {
private :
    double balance; // Private member variable
    string password;

public:
    string username;
    string accountId;

    // setter for balance
    void setBalance(double b) {
        balance = b;
    }

    // getter for balance
    double getBalance() {
        return balance;
    }

    //setter for password
    void setPassword(string p){
        password = p;
    }

    //getter for passwrord
    string getPassword(){
        return password;
    }
};

int main(){
    Account acc1;

    acc1.username = "Alice";
    acc1.accountId = "ACC12345";

    acc1.setBalance(1000.50); // Setting balance using setter
    acc1.setPassword("my_secure_password"); // Setting password using setter

    cout << "Username: " << acc1.username << endl;
    cout << "Account Id: " << acc1.accountId << endl;
    cout << "Balance: " << acc1.getBalance() << endl;
    cout << "Password: " << acc1.getPassword() << endl;
}