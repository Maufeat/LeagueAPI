#pragma once
#include "../base_def.hpp" 
#include "LolPerksSummonerRerollPoints.hpp"
namespace lol {
  struct LolPerksSummoner { 
    LolPerksSummonerRerollPoints rerollPoints;
    uint64_t xpSinceLastLevel;
    uint32_t percentCompleteForNextLevel;
    std::string puuid;
    std::string lastSeasonHighestRank;
    uint32_t summonerLevel;
    std::string displayName;
    uint64_t xpUntilNextLevel;
    std::string internalName;
    uint64_t accountId;
    int32_t profileIconId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolPerksSummoner& v) {
    j["rerollPoints"] = v.rerollPoints; 
    j["xpSinceLastLevel"] = v.xpSinceLastLevel; 
    j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel; 
    j["puuid"] = v.puuid; 
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank; 
    j["summonerLevel"] = v.summonerLevel; 
    j["displayName"] = v.displayName; 
    j["xpUntilNextLevel"] = v.xpUntilNextLevel; 
    j["internalName"] = v.internalName; 
    j["accountId"] = v.accountId; 
    j["profileIconId"] = v.profileIconId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolPerksSummoner& v) {
    v.rerollPoints = j.at("rerollPoints").get<LolPerksSummonerRerollPoints>(); 
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>(); 
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}