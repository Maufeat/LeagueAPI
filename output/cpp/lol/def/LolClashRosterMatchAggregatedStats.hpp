#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRosterMatchAggregatedStats { 
    bool loserBracket;
    std::map<std::string, int32_t> playerChampionIds;
    int64_t gameId;
    int64_t durationMs;
    std::string opponentShortName;
    int32_t opponentIconId;
    bool win;
    int32_t round;
    int32_t opponentIconColorId; 
  };
  inline void to_json(json& j, const LolClashRosterMatchAggregatedStats& v) {
    j["loserBracket"] = v.loserBracket; 
    j["playerChampionIds"] = v.playerChampionIds; 
    j["gameId"] = v.gameId; 
    j["durationMs"] = v.durationMs; 
    j["opponentShortName"] = v.opponentShortName; 
    j["opponentIconId"] = v.opponentIconId; 
    j["win"] = v.win; 
    j["round"] = v.round; 
    j["opponentIconColorId"] = v.opponentIconColorId; 
  }
  inline void from_json(const json& j, LolClashRosterMatchAggregatedStats& v) {
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.durationMs = j.at("durationMs").get<int64_t>(); 
    v.opponentShortName = j.at("opponentShortName").get<std::string>(); 
    v.opponentIconId = j.at("opponentIconId").get<int32_t>(); 
    v.win = j.at("win").get<bool>(); 
    v.round = j.at("round").get<int32_t>(); 
    v.opponentIconColorId = j.at("opponentIconColorId").get<int32_t>(); 
  }
}