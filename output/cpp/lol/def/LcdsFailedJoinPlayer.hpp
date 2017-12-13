#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsSummoner.hpp>
namespace lol {
  struct LcdsFailedJoinPlayer { 
    std::string reasonFailed;
    LcdsSummoner summoner; 
  };
  void to_json(json& j, const LcdsFailedJoinPlayer& v) {
  j["reasonFailed"] = v.reasonFailed; 
  j["summoner"] = v.summoner; 
  }
  void from_json(const json& j, LcdsFailedJoinPlayer& v) {
  v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
  v.summoner = j.at("summoner").get<LcdsSummoner>(); 
  }
}