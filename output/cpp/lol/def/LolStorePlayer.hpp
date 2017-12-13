#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolStorePlayer { 
    int64_t ip;
    int64_t rp;
    uint64_t accountId;
    uint32_t summonerLevel; 
  };
  void to_json(json& j, const LolStorePlayer& v) {
  j["ip"] = v.ip; 
  j["rp"] = v.rp; 
  j["accountId"] = v.accountId; 
  j["summonerLevel"] = v.summonerLevel; 
  }
  void from_json(const json& j, LolStorePlayer& v) {
  v.ip = j.at("ip").get<int64_t>(); 
  v.rp = j.at("rp").get<int64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}