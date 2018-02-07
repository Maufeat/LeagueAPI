#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsInviter { 
    uint64_t summonerId;
    std::string summonerName;
    std::string previousSeasonHighestTier; 
  };
  inline void to_json(json& j, const LcdsInviter& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
  }
  inline void from_json(const json& j, LcdsInviter& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
  }
}