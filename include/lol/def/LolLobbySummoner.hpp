#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbySummoner { 
    uint64_t summonerId;
    uint32_t summonerLevel;
    uint64_t accountId;
    std::string puuid;
    int32_t profileIconId;
    std::string displayName;
    std::string internalName;
    std::string lastSeasonHighestRank; 
  };
  inline void to_json(json& j, const LolLobbySummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["accountId"] = v.accountId; 
    j["puuid"] = v.puuid; 
    j["profileIconId"] = v.profileIconId; 
    j["displayName"] = v.displayName; 
    j["internalName"] = v.internalName; 
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank; 
  }
  inline void from_json(const json& j, LolLobbySummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
  }
}