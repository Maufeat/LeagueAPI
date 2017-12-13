#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolInventoryRmsEntitlementPayload { 
    std::string itemId;
    std::string itemTypeId; 
  };
  void to_json(json& j, const LolInventoryRmsEntitlementPayload& v) {
  j["itemId"] = v.itemId; 
  j["itemTypeId"] = v.itemTypeId; 
  }
  void from_json(const json& j, LolInventoryRmsEntitlementPayload& v) {
  v.itemId = j.at("itemId").get<std::string>(); 
  v.itemTypeId = j.at("itemTypeId").get<std::string>(); 
  }
}