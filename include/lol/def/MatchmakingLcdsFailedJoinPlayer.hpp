#pragma once
#include "../base_def.hpp" 
#include "MatchmakingLcdsSummoner.hpp"
namespace lol {
  struct MatchmakingLcdsFailedJoinPlayer { 
    MatchmakingLcdsSummoner summoner;
    std::string reasonFailed; 
  };
  inline void to_json(json& j, const MatchmakingLcdsFailedJoinPlayer& v) {
    j["summoner"] = v.summoner; 
    j["reasonFailed"] = v.reasonFailed; 
  }
  inline void from_json(const json& j, MatchmakingLcdsFailedJoinPlayer& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  }
}