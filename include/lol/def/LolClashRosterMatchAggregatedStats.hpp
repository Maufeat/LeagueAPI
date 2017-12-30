#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRosterMatchAggregatedStats { 
    std::map<std::string, int32_t> playerChampionIds;
    int32_t opponentIconId;
    int32_t opponentIconColorId;
    bool win;
    int64_t gameId;
    int64_t durationMs;
    bool loserBracket;
    std::string opponentShortName;
    int32_t round; 
  };
  inline void to_json(json& j, const LolClashRosterMatchAggregatedStats& v) {
    j["playerChampionIds"] = v.playerChampionIds; 
    j["opponentIconId"] = v.opponentIconId; 
    j["opponentIconColorId"] = v.opponentIconColorId; 
    j["win"] = v.win; 
    j["gameId"] = v.gameId; 
    j["durationMs"] = v.durationMs; 
    j["loserBracket"] = v.loserBracket; 
    j["opponentShortName"] = v.opponentShortName; 
    j["round"] = v.round; 
  }
  inline void from_json(const json& j, LolClashRosterMatchAggregatedStats& v) {
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>(); 
    v.opponentIconId = j.at("opponentIconId").get<int32_t>(); 
    v.opponentIconColorId = j.at("opponentIconColorId").get<int32_t>(); 
    v.win = j.at("win").get<bool>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.durationMs = j.at("durationMs").get<int64_t>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.opponentShortName = j.at("opponentShortName").get<std::string>(); 
    v.round = j.at("round").get<int32_t>(); 
  }
}