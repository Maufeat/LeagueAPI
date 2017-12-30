#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryInventoryDTO { 
    std::map<std::string, json> items;
    uint64_t accountId;
    std::string itemsJwt;
    std::string puuid;
    uint64_t summonerId;
    std::string expires; 
  };
  inline void to_json(json& j, const LolInventoryInventoryDTO& v) {
    j["items"] = v.items; 
    j["accountId"] = v.accountId; 
    j["itemsJwt"] = v.itemsJwt; 
    j["puuid"] = v.puuid; 
    j["summonerId"] = v.summonerId; 
    j["expires"] = v.expires; 
  }
  inline void from_json(const json& j, LolInventoryInventoryDTO& v) {
    v.items = j.at("items").get<std::map<std::string, json>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.itemsJwt = j.at("itemsJwt").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.expires = j.at("expires").get<std::string>(); 
  }
}