#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RosterMatchAggregatedStatsDTO { 
    std::map<std::string, int32_t> playerChampionIds;
    int32_t opponentLogoColor;
    int64_t gameId;
    bool win;
    int32_t opponentLogo;
    int32_t round;
    bool loserBracket;
    std::string opponentShortName;
    int64_t duration; 
  };
  inline void to_json(json& j, const RosterMatchAggregatedStatsDTO& v) {
    j["playerChampionIds"] = v.playerChampionIds; 
    j["opponentLogoColor"] = v.opponentLogoColor; 
    j["gameId"] = v.gameId; 
    j["win"] = v.win; 
    j["opponentLogo"] = v.opponentLogo; 
    j["round"] = v.round; 
    j["loserBracket"] = v.loserBracket; 
    j["opponentShortName"] = v.opponentShortName; 
    j["duration"] = v.duration; 
  }
  inline void from_json(const json& j, RosterMatchAggregatedStatsDTO& v) {
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>(); 
    v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.win = j.at("win").get<bool>(); 
    v.opponentLogo = j.at("opponentLogo").get<int32_t>(); 
    v.round = j.at("round").get<int32_t>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.opponentShortName = j.at("opponentShortName").get<std::string>(); 
    v.duration = j.at("duration").get<int64_t>(); 
  }
}