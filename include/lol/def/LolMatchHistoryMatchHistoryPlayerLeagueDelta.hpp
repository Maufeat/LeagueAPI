#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta { 
    std::vector<std::string> miniSeriesProgress;
    uint64_t leaguePointDelta;
    uint64_t timestamp;
    std::string reason; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    j["miniSeriesProgress"] = v.miniSeriesProgress; 
    j["leaguePointDelta"] = v.leaguePointDelta; 
    j["timestamp"] = v.timestamp; 
    j["reason"] = v.reason; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>(); 
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
  }
}