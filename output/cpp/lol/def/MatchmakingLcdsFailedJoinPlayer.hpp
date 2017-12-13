#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MatchmakingLcdsSummoner.hpp>
namespace lol {
  struct MatchmakingLcdsFailedJoinPlayer { 
    std::string reasonFailed;
    MatchmakingLcdsSummoner summoner; 
  };
  void to_json(json& j, const MatchmakingLcdsFailedJoinPlayer& v) {
  j["reasonFailed"] = v.reasonFailed; 
  j["summoner"] = v.summoner; 
  }
  void from_json(const json& j, MatchmakingLcdsFailedJoinPlayer& v) {
  v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
  }
}