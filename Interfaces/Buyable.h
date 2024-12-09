#ifndef OOP_PROJECT_BUYABLE_H
#define OOP_PROJECT_BUYABLE_H


#include "MoneyPossesive.h"
#include "Headers/Core/Price.h"
#include "Serializable.h"

class Buyable{
protected:
    std::string id;
    std::string name;
    std::string description;
    std::string image;
    std::shared_ptr<Price> price;
public:
    virtual std::string GetId();

    virtual std::string GetName();

    virtual std::string GetDescription();

    virtual std::string GetImage();

    virtual uint32_t GetMainUnitPrice();

    virtual uint32_t GetSubUnitPrice();

    virtual bool GetPrice(uint32_t &mainunit, uint32_t &subunit);

    virtual bool GetPrice(uint32_t &mainunit, uint32_t &subunit, std::shared_ptr<Currency> &currency);

    virtual void UpdateMainUnitPrice(uint32_t newmainprice);

    virtual void UpdateSubUnitPrice(uint32_t newsubprice);

    Buyable(std::string id, std::string name, std::string description, std::string image, std::shared_ptr<Price> &price);

    virtual ~Buyable() = default;
};


#endif //OOP_PROJECT_BUYABLE_H
