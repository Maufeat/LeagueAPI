#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct BasePublicSummonerDTO { /**/ 
    uint64_t acctId;/**/
    std::string puuid;/**/
    std::string name;/**/
    int32_t profileIconId;/**/
    std::string previousSeasonHighestTier;/**/
    std::string internalName;/**/
    uint64_t sumId;/**/
  };
  static void to_json(json& j, const BasePublicSummonerDTO& v) { 
    j["acctId"] = v.acctId;
    j["puuid"] = v.puuid;
    j["name"] = v.name;
    j["profileIconId"] = v.profileIconId;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["internalName"] = v.internalName;
    j["sumId"] = v.sumId;
  }
  static void from_json(const json& j, BasePublicSummonerDTO& v) { 
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
  }
} 