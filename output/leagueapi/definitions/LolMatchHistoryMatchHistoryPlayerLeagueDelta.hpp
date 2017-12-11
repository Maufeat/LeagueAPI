#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta { /**/ 
    uint64_t timestamp;/**/
    uint64_t leaguePointDelta;/**/
    std::string reason;/**/
    std::vector<std::string> miniSeriesProgress;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) { 
    j["timestamp"] = v.timestamp;
    j["leaguePointDelta"] = v.leaguePointDelta;
    j["reason"] = v.reason;
    j["miniSeriesProgress"] = v.miniSeriesProgress;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) { 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>(); 
  }
} 