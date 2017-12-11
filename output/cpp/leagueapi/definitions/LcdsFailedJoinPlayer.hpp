#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LcdsSummoner.hpp>

namespace leagueapi {
  struct LcdsFailedJoinPlayer { /**/ 
    std::string reasonFailed;/**/
    LcdsSummoner summoner;/**/
  };
  static void to_json(json& j, const LcdsFailedJoinPlayer& v) { 
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
  }
  static void from_json(const json& j, LcdsFailedJoinPlayer& v) { 
    v.reasonFailed = j.at("reasonFailed").get<std::string>(); 
    v.summoner = j.at("summoner").get<LcdsSummoner>(); 
  }
} 