#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLoadoutsGetItemsRequest { /**/ 
    std::vector<std::string> inventoryJWTs;/**/
    uint32_t id;/**/
    std::vector<std::string> inventoryTypes;/**/
  };
  static void to_json(json& j, const LolLoadoutsGetItemsRequest& v) { 
    j["inventoryJWTs"] = v.inventoryJWTs;
    j["id"] = v.id;
    j["inventoryTypes"] = v.inventoryTypes;
  }
  static void from_json(const json& j, LolLoadoutsGetItemsRequest& v) { 
    v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.inventoryTypes = j.at("inventoryTypes").get<std::vector<std::string>>(); 
  }
} 