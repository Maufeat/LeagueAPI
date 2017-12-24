#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BasePublicSummonerDTO { 
    std::string puuid;
    uint64_t acctId;
    std::string previousSeasonHighestTier;
    std::string name;
    uint64_t sumId;
    int32_t profileIconId;
    std::string internalName; 
  };
  inline void to_json(json& j, const BasePublicSummonerDTO& v) {
    j["puuid"] = v.puuid; 
    j["acctId"] = v.acctId; 
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
    j["name"] = v.name; 
    j["sumId"] = v.sumId; 
    j["profileIconId"] = v.profileIconId; 
    j["internalName"] = v.internalName; 
  }
  inline void from_json(const json& j, BasePublicSummonerDTO& v) {
    v.puuid = j.at("puuid").get<std::string>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
  }
}