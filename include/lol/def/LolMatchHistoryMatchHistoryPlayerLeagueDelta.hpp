#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta { 
    uint64_t timestamp;
    std::string reason;
    std::vector<std::string> miniSeriesProgress;
    uint64_t leaguePointDelta; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    j["timestamp"] = v.timestamp; 
    j["reason"] = v.reason; 
    j["miniSeriesProgress"] = v.miniSeriesProgress; 
    j["leaguePointDelta"] = v.leaguePointDelta; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>(); 
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t>(); 
  }
}