#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RosterMatchAggregatedStatsDTO { 
    std::string opponentShortName;
    bool win;
    int32_t opponentLogoColor;
    bool loserBracket;
    int32_t opponentLogo;
    int32_t round;
    int64_t gameId;
    int64_t duration;
    std::map<std::string, int32_t> playerChampionIds; 
  };
  void to_json(json& j, const RosterMatchAggregatedStatsDTO& v) {
  j["opponentShortName"] = v.opponentShortName; 
  j["win"] = v.win; 
  j["opponentLogoColor"] = v.opponentLogoColor; 
  j["loserBracket"] = v.loserBracket; 
  j["opponentLogo"] = v.opponentLogo; 
  j["round"] = v.round; 
  j["gameId"] = v.gameId; 
  j["duration"] = v.duration; 
  j["playerChampionIds"] = v.playerChampionIds; 
  }
  void from_json(const json& j, RosterMatchAggregatedStatsDTO& v) {
  v.opponentShortName = j.at("opponentShortName").get<std::string>(); 
  v.win = j.at("win").get<bool>(); 
  v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t>(); 
  v.loserBracket = j.at("loserBracket").get<bool>(); 
  v.opponentLogo = j.at("opponentLogo").get<int32_t>(); 
  v.round = j.at("round").get<int32_t>(); 
  v.gameId = j.at("gameId").get<int64_t>(); 
  v.duration = j.at("duration").get<int64_t>(); 
  v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>(); 
  }
}