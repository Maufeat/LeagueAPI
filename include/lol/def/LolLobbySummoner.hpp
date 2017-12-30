#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbySummoner { 
    int32_t profileIconId;
    std::string displayName;
    uint64_t accountId;
    uint32_t summonerLevel;
    std::string puuid;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolLobbySummoner& v) {
    j["profileIconId"] = v.profileIconId; 
    j["displayName"] = v.displayName; 
    j["accountId"] = v.accountId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["puuid"] = v.puuid; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolLobbySummoner& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}