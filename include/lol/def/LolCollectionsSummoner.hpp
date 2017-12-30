#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsSummoner { 
    uint64_t accountId;
    uint32_t summonerLevel;
    uint64_t summonerId;
    int32_t profileIconId; 
  };
  inline void to_json(json& j, const LolCollectionsSummoner& v) {
    j["accountId"] = v.accountId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["summonerId"] = v.summonerId; 
    j["profileIconId"] = v.profileIconId; 
  }
  inline void from_json(const json& j, LolCollectionsSummoner& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  }
}