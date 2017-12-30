#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PublicSummonerDTO { 
    std::string name;
    int32_t profileIconId;
    uint32_t summonerLevel;
    uint64_t summonerId;
    std::string puuid;
    std::string previousSeasonHighestTier;
    std::string internalName;
    uint64_t acctId; 
  };
  inline void to_json(json& j, const PublicSummonerDTO& v) {
    j["name"] = v.name; 
    j["profileIconId"] = v.profileIconId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["summonerId"] = v.summonerId; 
    j["puuid"] = v.puuid; 
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
    j["internalName"] = v.internalName; 
    j["acctId"] = v.acctId; 
  }
  inline void from_json(const json& j, PublicSummonerDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
  }
}