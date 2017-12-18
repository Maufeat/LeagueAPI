#pragma once
#include "../base_def.hpp" 
#include "LcdsSummoner.hpp"
namespace lol {
  struct LcdsFailedJoinPlayer { 
    LcdsSummoner summoner;
    std::string reasonFailed; 
  };
  inline void to_json(json& j, const LcdsFailedJoinPlayer& v) {
    j["summoner"] = v.summoner; 
    j["reasonFailed"] = v.reasonFailed; 
  }
  inline void from_json(const json& j, LcdsFailedJoinPlayer& v) {
    v.summoner = j.at("summoner").get<LcdsSummoner>(); 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  }
}