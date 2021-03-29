#include "main.hpp"

int main() {
    
    std::string name1, address1, tphonenumber1;
    std::string name2, address2, tphonenumber2;
    
    
    std::cout<<"Tell me your name:";
    std::getline(std::cin, name1);
    std::cout<<"\n\n"<<name1<<"\n";
  
    std::cout<<"Tell me your address:";
    std::getline(std::cin, address1);
    std::cout<<"\t\t"<<address1<<"\n";
    
    std::cout<<"Tell me your phone number:";
    std::getline(std::cin, tphonenumber1);
    std::cout<<"\t\t"<<tphonenumber1<<"\n";
    
    std::cout<<"Tell me your name:";
    std::getline(std::cin, name2);
    std::cout<<"\n\n"<<name2<<"\n";
  
    std::cout<<"Tell me your address:";
    std::getline(std::cin, address2);
    std::cout<<"\t\t"<<address2<<"\n";
    
    
    std::cout<<"Tell me your phone number:";
    std::getline(std::cin, tphonenumber2);
    std::cout<<"\t\t"<<tphonenumber2<<"\n";
    
    return 0;
}