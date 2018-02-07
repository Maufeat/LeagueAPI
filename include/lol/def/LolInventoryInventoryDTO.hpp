#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryInventoryDTO { 
    std::string puuid;
    uint64_t accountId;
    uint64_t summonerId;
    std::map<std::string, json> items;
    std::string expires;
    std::string itemsJwt; 
  };
  inline void to_json(json& j, const LolInventoryInventoryDTO& v) {
    j["puuid"] = v.puuid; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["items"] = v.items; 
    j["expires"] = v.expires; 
    j["itemsJwt"] = v.itemsJwt; 
  }
  inline void from_json(const json& j, LolInventoryInventoryDTO& v) {
    v.puuid = j.at("puuid").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
    v.expires = j.at("expires").get<std::string>(); 
    v.itemsJwt = j.at("itemsJwt").get<std::string>(); 
  }
}