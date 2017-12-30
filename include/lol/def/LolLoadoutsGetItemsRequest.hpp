#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsGetItemsRequest { 
    std::vector<std::string> inventoryTypes;
    uint32_t id;
    std::vector<std::string> inventoryJWTs; 
  };
  inline void to_json(json& j, const LolLoadoutsGetItemsRequest& v) {
    j["inventoryTypes"] = v.inventoryTypes; 
    j["id"] = v.id; 
    j["inventoryJWTs"] = v.inventoryJWTs; 
  }
  inline void from_json(const json& j, LolLoadoutsGetItemsRequest& v) {
    v.inventoryTypes = j.at("inventoryTypes").get<std::vector<std::string>>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>(); 
  }
}