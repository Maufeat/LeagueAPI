#pragma once
#include "../base_def.hpp" 
#include "LolPerksSummonerRerollPoints.hpp"
namespace lol {
  struct LolPerksSummoner { 
    uint64_t summonerId;
    uint64_t accountId;
    std::string displayName;
    std::string internalName;
    std::string lastSeasonHighestRank;
    int32_t profileIconId;
    uint32_t summonerLevel;
    uint64_t xpSinceLastLevel;
    uint64_t xpUntilNextLevel;
    uint32_t percentCompleteForNextLevel;
    LolPerksSummonerRerollPoints rerollPoints;
    std::string puuid; 
  };
  inline void to_json(json& j, const LolPerksSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["displayName"] = v.displayName; 
    j["internalName"] = v.internalName; 
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank; 
    j["profileIconId"] = v.profileIconId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["xpSinceLastLevel"] = v.xpSinceLastLevel; 
    j["xpUntilNextLevel"] = v.xpUntilNextLevel; 
    j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel; 
    j["rerollPoints"] = v.rerollPoints; 
    j["puuid"] = v.puuid; 
  }
  inline void from_json(const json& j, LolPerksSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>(); 
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>(); 
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>(); 
    v.rerollPoints = j.at("rerollPoints").get<LolPerksSummonerRerollPoints>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
  }
}