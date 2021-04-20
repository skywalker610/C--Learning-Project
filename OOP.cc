#include <iostream>
#include <string>

class BankAccount
{
  private:
      // TODO: declare member variables
    int number_{1};
    std::string owner_{"none"};
    double fund_{};

  public:
      // TODO: declare setters
        BankAccount(int number, std::string owner, double fund);
        void account_number(int number);
        void account_owner(std::string owner);
        void account_fund(double fund);
      // TODO: declare getters
        int account_number() const {return number_;}
        std::string account_owner() const {return owner_;}
        double account_fund() const{return fund_;}
};

// TODO: implement setters
    BankAccount::BankAccount(int number,std::string owner,double fund){
        account_number(number);
        account_owner(owner);
        account_fund(fund);
    }
    void BankAccount::account_number(int number){
        number_ = number;
    }
    void BankAccount::account_owner(std::string owner){
        owner_ = owner;
    }
    void BankAccount::account_fund(double fund){
        fund_ = fund;
    }
// TODO: implement getters
int main(){
    // TODO: instantiate and output a bank account
    BankAccount bankaccount(203050,"Qi Yang", 100000000000.0);
    std::cout << "Account Information "<<std::endl;
    std::cout << "-------------------- "<<std::endl;
    std::cout << "Account number: "<<bankaccount.account_number()<<std::endl;
    std::cout << "Account owner: "<<bankaccount.account_owner()<<std::endl;
    std::cout << "Account fund: "<<bankaccount.account_fund()<<std::endl;
}