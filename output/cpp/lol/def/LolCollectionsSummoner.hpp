#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsSummoner { 
    int32_t profileIconId;
    uint64_t summonerId;
    uint64_t accountId;
    uint32_t summonerLevel; 
  };
  void to_json(json& j, const LolCollectionsSummoner& v) {
  j["profileIconId"] = v.profileIconId; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  j["summonerLevel"] = v.summonerLevel; 
  }
  void from_json(const json& j, LolCollectionsSummoner& v) {
  v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}