#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MatchmakingLcdsSummoner.hpp>
namespace lol {
  struct MatchmakingLcdsBustedLeaver { 
    std::string accessToken;
    uint64_t leaverPenaltyMillisRemaining;
    std::string reasonFailed;
    MatchmakingLcdsSummoner summoner; 
  };
  void to_json(json& j, const MatchmakingLcdsBustedLeaver& v) {
  j["accessToken"] = v.accessToken; 
  j["leaverPenaltyMillisRemaining"] = v.leaverPenaltyMillisRemaining; 
  j["reasonFailed"] = v.reasonFailed; 
  j["summoner"] = v.summoner; 
  }
  void from_json(const json& j, MatchmakingLcdsBustedLeaver& v) {
  v.accessToken = j.at("accessToken").get<std::string>(); 
  v.leaverPenaltyMillisRemaining = j.at("leaverPenaltyMillisRemaining").get<uint64_t>(); 
  v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>(); 
  }
}