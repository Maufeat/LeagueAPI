#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RosterMatchAggregatedStatsDTO { 
    int32_t round;
    int64_t duration;
    std::string opponentShortName;
    int32_t opponentLogo;
    int32_t opponentLogoColor;
    bool win;
    bool loserBracket;
    int64_t gameId;
    std::map<std::string, int32_t> playerChampionIds; 
  };
  inline void to_json(json& j, const RosterMatchAggregatedStatsDTO& v) {
    j["round"] = v.round; 
    j["duration"] = v.duration; 
    j["opponentShortName"] = v.opponentShortName; 
    j["opponentLogo"] = v.opponentLogo; 
    j["opponentLogoColor"] = v.opponentLogoColor; 
    j["win"] = v.win; 
    j["loserBracket"] = v.loserBracket; 
    j["gameId"] = v.gameId; 
    j["playerChampionIds"] = v.playerChampionIds; 
  }
  inline void from_json(const json& j, RosterMatchAggregatedStatsDTO& v) {
    v.round = j.at("round").get<int32_t>(); 
    v.duration = j.at("duration").get<int64_t>(); 
    v.opponentShortName = j.at("opponentShortName").get<std::string>(); 
    v.opponentLogo = j.at("opponentLogo").get<int32_t>(); 
    v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t>(); 
    v.win = j.at("win").get<bool>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>(); 
  }
}