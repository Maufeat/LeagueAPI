#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoadoutsInventoryDTO { 
    std::optional<std::string> itemsJwt;
    uint64_t accountId;
    std::string puuid;
    std::string expires;
    std::map<std::string, json> items;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolLoadoutsInventoryDTO& v) {
    if(v.itemsJwt)
      j["itemsJwt"] = *v.itemsJwt;
    j["accountId"] = v.accountId; 
    j["puuid"] = v.puuid; 
    j["expires"] = v.expires; 
    j["items"] = v.items; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolLoadoutsInventoryDTO& v) {
    if(auto it = j.find("itemsJwt"); it != j.end() && !it->is_null())
      v.itemsJwt = it->get<std::optional<std::string>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.expires = j.at("expires").get<std::string>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}