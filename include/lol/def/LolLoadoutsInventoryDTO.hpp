#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsInventoryDTO { 
    std::map<std::string, json> items;
    uint64_t accountId;
    std::optional<std::string> itemsJwt;
    std::string puuid;
    uint64_t summonerId;
    std::string expires; 
  };
  inline void to_json(json& j, const LolLoadoutsInventoryDTO& v) {
    j["items"] = v.items; 
    j["accountId"] = v.accountId; 
    if(v.itemsJwt)
      j["itemsJwt"] = *v.itemsJwt;
    j["puuid"] = v.puuid; 
    j["summonerId"] = v.summonerId; 
    j["expires"] = v.expires; 
  }
  inline void from_json(const json& j, LolLoadoutsInventoryDTO& v) {
    v.items = j.at("items").get<std::map<std::string, json>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    if(auto it = j.find("itemsJwt"); it != j.end() && !it->is_null())
      v.itemsJwt = it->get<std::optional<std::string>>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.expires = j.at("expires").get<std::string>(); 
  }
}