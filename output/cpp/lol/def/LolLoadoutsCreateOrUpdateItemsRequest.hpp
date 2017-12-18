#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoadoutsCreateOrUpdateItemsRequest { 
    std::vector<std::string> inventoryJWTs;
    std::map<std::string, json> items;
    uint32_t id; 
  };
  inline void to_json(json& j, const LolLoadoutsCreateOrUpdateItemsRequest& v) {
    j["inventoryJWTs"] = v.inventoryJWTs; 
    j["items"] = v.items; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLoadoutsCreateOrUpdateItemsRequest& v) {
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
}