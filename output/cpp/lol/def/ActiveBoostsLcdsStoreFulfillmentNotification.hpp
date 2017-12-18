#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ActiveBoostsLcdsStoreFulfillmentNotification { 
    json data;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const ActiveBoostsLcdsStoreFulfillmentNotification& v) {
    j["data"] = v.data; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, ActiveBoostsLcdsStoreFulfillmentNotification& v) {
    v.data = j.at("data").get<json>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}