#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryInventoryDTO { 
    std::string puuid;
    uint64_t summonerId;
    std::string expires;
    std::string itemsJwt;
    uint64_t accountId;
    std::map<std::string, json> items; 
  };
  inline void to_json(json& j, const LolInventoryInventoryDTO& v) {
    j["puuid"] = v.puuid; 
    j["summonerId"] = v.summonerId; 
    j["expires"] = v.expires; 
    j["itemsJwt"] = v.itemsJwt; 
    j["accountId"] = v.accountId; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolInventoryInventoryDTO& v) {
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.expires = j.at("expires").get<std::string>(); 
    v.itemsJwt = j.at("itemsJwt").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
  }
}