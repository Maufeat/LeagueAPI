#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta { 
    uint64_t leaguePointDelta;
    std::string reason;
    std::vector<std::string> miniSeriesProgress;
    uint64_t timestamp; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    j["leaguePointDelta"] = v.leaguePointDelta; 
    j["reason"] = v.reason; 
    j["miniSeriesProgress"] = v.miniSeriesProgress; 
    j["timestamp"] = v.timestamp; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
  }
}