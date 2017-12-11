#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PublicSummonerDTO { /**/ 
    uint64_t summonerId;/**/
    std::string puuid;/**/
    uint64_t acctId;/**/
    std::string name;/**/
    int32_t profileIconId;/**/
    std::string previousSeasonHighestTier;/**/
    std::string internalName;/**/
    uint32_t summonerLevel;/**/
  };
  static void to_json(json& j, const PublicSummonerDTO& v) { 
    j["summonerId"] = v.summonerId;
    j["puuid"] = v.puuid;
    j["acctId"] = v.acctId;
    j["name"] = v.name;
    j["profileIconId"] = v.profileIconId;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["internalName"] = v.internalName;
    j["summonerLevel"] = v.summonerLevel;
  }
  static void from_json(const json& j, PublicSummonerDTO& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
} 