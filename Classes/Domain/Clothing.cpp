#include "../../Headers/Domain/Clothing.h"

Clothing::Clothing(std::string id, std::string name, std::string description, std::string image, uint32_t quantity, std::shared_ptr<Price>& price, Color color, std::string clothing_type, uint32_t size)
        : Product(id, name, description, image, quantity, price) {
    this->color = color;
    this->clothing_type = clothing_type;
    this->size = size;
}

Color Clothing::GetColor() {
    return color;
}

std::string Clothing::GetClothingType() {
    return clothing_type;
}

uint32_t Clothing::GetSize() {
    return size;
}

Clothing &Clothing::operator=(const Clothing &other) {
    if(this == &other) {
        return *this;
    }

    this->id = other.id;
    this->name = other.name;
    this->description = other.description;
    this->image = other.image;
    this->quantity = other.quantity;
    this->price = other.price;
    this->color = other.color;
    this->clothing_type = other.clothing_type;
    this->size = other.size;

    return *this;
}
