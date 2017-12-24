#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RosterMatchAggregatedStatsDTO { 
    int64_t duration;
    int32_t opponentLogo;
    int64_t gameId;
    bool loserBracket;
    bool win;
    std::string opponentShortName;
    int32_t opponentLogoColor;
    std::map<std::string, int32_t> playerChampionIds;
    int32_t round; 
  };
  inline void to_json(json& j, const RosterMatchAggregatedStatsDTO& v) {
    j["duration"] = v.duration; 
    j["opponentLogo"] = v.opponentLogo; 
    j["gameId"] = v.gameId; 
    j["loserBracket"] = v.loserBracket; 
    j["win"] = v.win; 
    j["opponentShortName"] = v.opponentShortName; 
    j["opponentLogoColor"] = v.opponentLogoColor; 
    j["playerChampionIds"] = v.playerChampionIds; 
    j["round"] = v.round; 
  }
  inline void from_json(const json& j, RosterMatchAggregatedStatsDTO& v) {
    v.duration = j.at("duration").get<int64_t>(); 
    v.opponentLogo = j.at("opponentLogo").get<int32_t>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.win = j.at("win").get<bool>(); 
    v.opponentShortName = j.at("opponentShortName").get<std::string>(); 
    v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t>(); 
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>(); 
    v.round = j.at("round").get<int32_t>(); 
  }
}