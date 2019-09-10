//Authors: 
#include <iostream>
#include <string>

int main()
{
        std::string name;
        int wholeNum;
        std::string adj;
        std::string drink;
        double dec;

        std::cout << "Enter your First Name:" << std::endl;
        std::cin >> name;
        std::cout << "Enter A Whole Number:" << std::endl;
        std::cin >> wholeNum;
        std::cout << "Enter An Adjective:" << std::endl;
        std::cin >> adj;
        std::cout << "Enter The Name of A Drink:" << std::endl;
        std::cin >> drink;
        std::cout << "Enter A Decimal Number:" << std::endl;
        std::cin >> dec;

        std::cout << "The party was " << adj << "." << std::endl;
        std::cout <<  name << " planned the party pretty well considering " << std::endl;
        std::cout << "they are only " << wholeNum << ". ";
        std::cout << "I was " << dec << " Percent sure they wouldn't be able to do it."<< std::endl;
        std::cout << "I am especially excited that they decided to have " << drink ;
        std::cout << " at the party." <<std::endl;



  return 0;
}
