#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoadoutsGetItemsRequest { 
    std::vector<std::string> inventoryJWTs;
    std::vector<std::string> inventoryTypes;
    uint32_t id; 
  };
  void to_json(json& j, const LolLoadoutsGetItemsRequest& v) {
  j["inventoryJWTs"] = v.inventoryJWTs; 
  j["inventoryTypes"] = v.inventoryTypes; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolLoadoutsGetItemsRequest& v) {
  v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>(); 
  v.inventoryTypes = j.at("inventoryTypes").get<std::vector<std::string>>(); 
  v.id = j.at("id").get<uint32_t>(); 
  }
}