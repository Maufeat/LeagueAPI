#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRosterMatchAggregatedStats { 
    int32_t round;
    int64_t durationMs;
    std::string opponentShortName;
    int32_t opponentIconId;
    int32_t opponentIconColorId;
    bool win;
    bool loserBracket;
    int64_t gameId;
    std::map<std::string, int32_t> playerChampionIds; 
  };
  inline void to_json(json& j, const LolClashRosterMatchAggregatedStats& v) {
    j["round"] = v.round; 
    j["durationMs"] = v.durationMs; 
    j["opponentShortName"] = v.opponentShortName; 
    j["opponentIconId"] = v.opponentIconId; 
    j["opponentIconColorId"] = v.opponentIconColorId; 
    j["win"] = v.win; 
    j["loserBracket"] = v.loserBracket; 
    j["gameId"] = v.gameId; 
    j["playerChampionIds"] = v.playerChampionIds; 
  }
  inline void from_json(const json& j, LolClashRosterMatchAggregatedStats& v) {
    v.round = j.at("round").get<int32_t>(); 
    v.durationMs = j.at("durationMs").get<int64_t>(); 
    v.opponentShortName = j.at("opponentShortName").get<std::string>(); 
    v.opponentIconId = j.at("opponentIconId").get<int32_t>(); 
    v.opponentIconColorId = j.at("opponentIconColorId").get<int32_t>(); 
    v.win = j.at("win").get<bool>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>(); 
  }
}