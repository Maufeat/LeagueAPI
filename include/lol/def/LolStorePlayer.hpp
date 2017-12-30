#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStorePlayer { 
    uint64_t accountId;
    uint32_t summonerLevel;
    int64_t rp;
    int64_t ip; 
  };
  inline void to_json(json& j, const LolStorePlayer& v) {
    j["accountId"] = v.accountId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["rp"] = v.rp; 
    j["ip"] = v.ip; 
  }
  inline void from_json(const json& j, LolStorePlayer& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.rp = j.at("rp").get<int64_t>(); 
    v.ip = j.at("ip").get<int64_t>(); 
  }
}