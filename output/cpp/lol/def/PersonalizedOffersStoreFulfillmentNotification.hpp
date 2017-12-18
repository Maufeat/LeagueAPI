#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PersonalizedOffersStoreFulfillmentNotification { 
    json data;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const PersonalizedOffersStoreFulfillmentNotification& v) {
    j["data"] = v.data; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, PersonalizedOffersStoreFulfillmentNotification& v) {
    v.data = j.at("data").get<json>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}