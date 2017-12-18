#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolStorePlayer { 
    uint32_t summonerLevel;
    int64_t ip;
    int64_t rp;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolStorePlayer& v) {
    j["summonerLevel"] = v.summonerLevel; 
    j["ip"] = v.ip; 
    j["rp"] = v.rp; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolStorePlayer& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.ip = j.at("ip").get<int64_t>(); 
    v.rp = j.at("rp").get<int64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}