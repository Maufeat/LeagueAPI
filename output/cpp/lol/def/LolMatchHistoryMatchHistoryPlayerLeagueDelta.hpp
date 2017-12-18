#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta { 
    uint64_t leaguePointDelta;
    uint64_t timestamp;
    std::vector<std::string> miniSeriesProgress;
    std::string reason; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    j["leaguePointDelta"] = v.leaguePointDelta; 
    j["timestamp"] = v.timestamp; 
    j["miniSeriesProgress"] = v.miniSeriesProgress; 
    j["reason"] = v.reason; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerLeagueDelta& v) {
    v.leaguePointDelta = j.at("leaguePointDelta").get<uint64_t>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.miniSeriesProgress = j.at("miniSeriesProgress").get<std::vector<std::string>>(); 
    v.reason = j.at("reason").get<std::string>(); 
  }
}