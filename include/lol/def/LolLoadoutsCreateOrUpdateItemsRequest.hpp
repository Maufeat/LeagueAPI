#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsCreateOrUpdateItemsRequest { 
    uint32_t id;
    std::vector<std::string> inventoryJWTs;
    std::map<std::string, json> items; 
  };
  inline void to_json(json& j, const LolLoadoutsCreateOrUpdateItemsRequest& v) {
    j["id"] = v.id; 
    j["inventoryJWTs"] = v.inventoryJWTs; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolLoadoutsCreateOrUpdateItemsRequest& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
  }
}