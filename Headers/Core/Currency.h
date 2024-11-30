//
// Created by pawel on 24/11/2024.
//

#ifndef OOP_PROJECT_CURRENCY_H
#define OOP_PROJECT_CURRENCY_H

#include <string>
#include <map>

class Currency {
private:
    std::string name;
    std::string code;
    std::string symbol;
    uint32_t subs_is_main;
    std::map<std::string, float> exchange_rates;
public:
    std::string GetName();
    std::string GetCode();
    std::string GetSymbol();
    bool SetExchangeRate(std::string code, float rate);
    bool GetExchangeRate(std::string code, float & rate);
    uint32_t GetSubsIsMain();
    bool operator==(const Currency &other_currency);
    Currency(std::string name, std::string code, std::string symbol, uint32_t subs_is_main, std::map<std::string, float> exchange_rates = {});
};


#endif //OOP_PROJECT_CURRENCY_H