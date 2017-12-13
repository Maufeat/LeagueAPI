#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolInventoryRmsEntitlementPayload { 
    std::string itemTypeId;
    std::string itemId; 
  };
  void to_json(json& j, const LolInventoryRmsEntitlementPayload& v) {
    j["itemTypeId"] = v.itemTypeId; 
    j["itemId"] = v.itemId; 
  }
  void from_json(const json& j, LolInventoryRmsEntitlementPayload& v) {
    v.itemTypeId = j.at("itemTypeId").get<std::string>(); 
    v.itemId = j.at("itemId").get<std::string>(); 
  }
}