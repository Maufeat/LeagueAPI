#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RosterMatchAggregatedStatsDTO { 
    bool loserBracket;
    std::map<std::string, int32_t> playerChampionIds;
    int64_t duration;
    int64_t gameId;
    std::string opponentShortName;
    int32_t opponentLogoColor;
    int32_t opponentLogo;
    bool win;
    int32_t round; 
  };
  inline void to_json(json& j, const RosterMatchAggregatedStatsDTO& v) {
    j["loserBracket"] = v.loserBracket; 
    j["playerChampionIds"] = v.playerChampionIds; 
    j["duration"] = v.duration; 
    j["gameId"] = v.gameId; 
    j["opponentShortName"] = v.opponentShortName; 
    j["opponentLogoColor"] = v.opponentLogoColor; 
    j["opponentLogo"] = v.opponentLogo; 
    j["win"] = v.win; 
    j["round"] = v.round; 
  }
  inline void from_json(const json& j, RosterMatchAggregatedStatsDTO& v) {
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>(); 
    v.duration = j.at("duration").get<int64_t>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.opponentShortName = j.at("opponentShortName").get<std::string>(); 
    v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t>(); 
    v.opponentLogo = j.at("opponentLogo").get<int32_t>(); 
    v.win = j.at("win").get<bool>(); 
    v.round = j.at("round").get<int32_t>(); 
  }
}