#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRosterMatchAggregatedStats { 
    int64_t gameId;
    bool loserBracket;
    int32_t round;
    std::string opponentShortName;
    int32_t opponentIconId;
    std::map<std::string, int32_t> playerChampionIds;
    int32_t opponentIconColorId;
    int64_t durationMs;
    bool win; 
  };
  inline void to_json(json& j, const LolClashRosterMatchAggregatedStats& v) {
    j["gameId"] = v.gameId; 
    j["loserBracket"] = v.loserBracket; 
    j["round"] = v.round; 
    j["opponentShortName"] = v.opponentShortName; 
    j["opponentIconId"] = v.opponentIconId; 
    j["playerChampionIds"] = v.playerChampionIds; 
    j["opponentIconColorId"] = v.opponentIconColorId; 
    j["durationMs"] = v.durationMs; 
    j["win"] = v.win; 
  }
  inline void from_json(const json& j, LolClashRosterMatchAggregatedStats& v) {
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.round = j.at("round").get<int32_t>(); 
    v.opponentShortName = j.at("opponentShortName").get<std::string>(); 
    v.opponentIconId = j.at("opponentIconId").get<int32_t>(); 
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>(); 
    v.opponentIconColorId = j.at("opponentIconColorId").get<int32_t>(); 
    v.durationMs = j.at("durationMs").get<int64_t>(); 
    v.win = j.at("win").get<bool>(); 
  }
}