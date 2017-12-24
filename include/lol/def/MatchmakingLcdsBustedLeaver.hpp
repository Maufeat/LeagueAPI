#pragma once
#include "../base_def.hpp" 
#include "MatchmakingLcdsSummoner.hpp"
namespace lol {
  struct MatchmakingLcdsBustedLeaver { 
    uint64_t leaverPenaltyMillisRemaining;
    MatchmakingLcdsSummoner summoner;
    std::string accessToken;
    std::string reasonFailed; 
  };
  inline void to_json(json& j, const MatchmakingLcdsBustedLeaver& v) {
    j["leaverPenaltyMillisRemaining"] = v.leaverPenaltyMillisRemaining; 
    j["summoner"] = v.summoner; 
    j["accessToken"] = v.accessToken; 
    j["reasonFailed"] = v.reasonFailed; 
  }
  inline void from_json(const json& j, MatchmakingLcdsBustedLeaver& v) {
    v.leaverPenaltyMillisRemaining = j.at("leaverPenaltyMillisRemaining").get<uint64_t>(); 
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
    v.accessToken = j.at("accessToken").get<std::string>(); 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  }
}