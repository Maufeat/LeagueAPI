#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsSummoner { 
    uint32_t summonerLevel;
    uint64_t accountId;
    int32_t profileIconId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolCollectionsSummoner& v) {
    j["summonerLevel"] = v.summonerLevel; 
    j["accountId"] = v.accountId; 
    j["profileIconId"] = v.profileIconId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolCollectionsSummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}