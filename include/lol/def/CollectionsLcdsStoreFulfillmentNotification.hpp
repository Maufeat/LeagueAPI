#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct CollectionsLcdsStoreFulfillmentNotification { 
    std::string inventoryType;
    json data; 
  };
  inline void to_json(json& j, const CollectionsLcdsStoreFulfillmentNotification& v) {
    j["inventoryType"] = v.inventoryType; 
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, CollectionsLcdsStoreFulfillmentNotification& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.data = j.at("data").get<json>(); 
  }
}