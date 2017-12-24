#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbySummoner { 
    uint64_t summonerId;
    std::string puuid;
    uint64_t accountId;
    std::string displayName;
    uint32_t summonerLevel;
    int32_t profileIconId; 
  };
  inline void to_json(json& j, const LolLobbySummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["puuid"] = v.puuid; 
    j["accountId"] = v.accountId; 
    j["displayName"] = v.displayName; 
    j["summonerLevel"] = v.summonerLevel; 
    j["profileIconId"] = v.profileIconId; 
  }
  inline void from_json(const json& j, LolLobbySummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  }
}