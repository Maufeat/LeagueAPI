#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsSummoner { 
    uint64_t summonerId;
    uint32_t summonerLevel;
    int32_t profileIconId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolCollectionsSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["profileIconId"] = v.profileIconId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolCollectionsSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}