#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsSummoner.hpp>
namespace lol {
  struct LcdsFailedJoinPlayer { 
    LcdsSummoner summoner;
    std::string reasonFailed; 
  };
  void to_json(json& j, const LcdsFailedJoinPlayer& v) {
  j["summoner"] = v.summoner; 
  j["reasonFailed"] = v.reasonFailed; 
  }
  void from_json(const json& j, LcdsFailedJoinPlayer& v) {
  v.summoner = j.at("summoner").get<LcdsSummoner>(); 
  v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  }
}