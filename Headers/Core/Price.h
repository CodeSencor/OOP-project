#ifndef OOP_PROJECT_PRICE_H
#define OOP_PROJECT_PRICE_H


#include "Currency.h"
#include "Interfaces/MoneyPossesive.h"
#include "Interfaces/Serializable.h"

class Price : virtual public MoneyPossesive, virtual public Serializable {
public:
    void UpdateMainUnit(uint32_t newmainprice);

    void UpdateSubUnit(uint32_t newsubprice);

    void UpdatePrice(uint32_t newmainprice, uint32_t newsubprice);

    Price &operator=(const Price &price);

    Price(std::shared_ptr<Currency> &currency, uint32_t mainunit, uint32_t subunit);

    nlohmann::json toJSON() const override;

    void fromJSON(const nlohmann::json &json) override;
};


#endif //OOP_PROJECT_PRICE_H
