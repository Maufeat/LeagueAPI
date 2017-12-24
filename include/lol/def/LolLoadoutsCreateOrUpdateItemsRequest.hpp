#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsCreateOrUpdateItemsRequest { 
    uint32_t id;
    std::map<std::string, json> items;
    std::vector<std::string> inventoryJWTs; 
  };
  inline void to_json(json& j, const LolLoadoutsCreateOrUpdateItemsRequest& v) {
    j["id"] = v.id; 
    j["items"] = v.items; 
    j["inventoryJWTs"] = v.inventoryJWTs; 
  }
  inline void from_json(const json& j, LolLoadoutsCreateOrUpdateItemsRequest& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>(); 
  }
}