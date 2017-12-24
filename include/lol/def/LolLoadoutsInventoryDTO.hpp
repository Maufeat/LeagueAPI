#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsInventoryDTO { 
    std::string puuid;
    uint64_t summonerId;
    std::string expires;
    std::optional<std::string> itemsJwt;
    uint64_t accountId;
    std::map<std::string, json> items; 
  };
  inline void to_json(json& j, const LolLoadoutsInventoryDTO& v) {
    j["puuid"] = v.puuid; 
    j["summonerId"] = v.summonerId; 
    j["expires"] = v.expires; 
    if(v.itemsJwt)
      j["itemsJwt"] = *v.itemsJwt;
    j["accountId"] = v.accountId; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolLoadoutsInventoryDTO& v) {
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.expires = j.at("expires").get<std::string>(); 
    if(auto it = j.find("itemsJwt"); it != j.end() && !it->is_null())
      v.itemsJwt = it->get<std::optional<std::string>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
  }
}