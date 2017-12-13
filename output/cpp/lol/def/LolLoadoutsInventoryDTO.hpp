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
  void to_json(json& j, const LolLoadoutsInventoryDTO& v) {
  j["itemsJwt"] = v.itemsJwt; 
  j["accountId"] = v.accountId; 
  j["puuid"] = v.puuid; 
  j["expires"] = v.expires; 
  j["items"] = v.items; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolLoadoutsInventoryDTO& v) {
  v.itemsJwt = j.at("itemsJwt").get<std::optional<std::string>>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.expires = j.at("expires").get<std::string>(); 
  v.items = j.at("items").get<std::map<std::string, json>>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}