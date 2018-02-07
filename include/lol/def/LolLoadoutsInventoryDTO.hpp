#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsInventoryDTO { 
    std::string puuid;
    uint64_t accountId;
    uint64_t summonerId;
    std::map<std::string, json> items;
    std::string expires;
    std::optional<std::string> itemsJwt; 
  };
  inline void to_json(json& j, const LolLoadoutsInventoryDTO& v) {
    j["puuid"] = v.puuid; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["items"] = v.items; 
    j["expires"] = v.expires; 
    if(v.itemsJwt)
      j["itemsJwt"] = *v.itemsJwt;
  }
  inline void from_json(const json& j, LolLoadoutsInventoryDTO& v) {
    v.puuid = j.at("puuid").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
    v.expires = j.at("expires").get<std::string>(); 
    if(auto it = j.find("itemsJwt"); it != j.end() && !it->is_null())
      v.itemsJwt = it->get<std::optional<std::string>>(); 
  }
}