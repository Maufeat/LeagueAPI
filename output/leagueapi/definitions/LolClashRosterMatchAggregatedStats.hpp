#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashRosterMatchAggregatedStats { /**/ 
    int32_t opponentIconColorId;/**/
    int64_t durationMs;/**/
    std::string opponentShortName;/**/
    bool loserBracket;/**/
    int32_t round;/**/
    int64_t gameId;/**/
    std::map<std::string, int32_t> playerChampionIds;/**/
    int32_t opponentIconId;/**/
    bool win;/**/
  };
  static void to_json(json& j, const LolClashRosterMatchAggregatedStats& v) { 
    j["opponentIconColorId"] = v.opponentIconColorId;
    j["durationMs"] = v.durationMs;
    j["opponentShortName"] = v.opponentShortName;
    j["loserBracket"] = v.loserBracket;
    j["round"] = v.round;
    j["gameId"] = v.gameId;
    j["playerChampionIds"] = v.playerChampionIds;
    j["opponentIconId"] = v.opponentIconId;
    j["win"] = v.win;
  }
  static void from_json(const json& j, LolClashRosterMatchAggregatedStats& v) { 
    v.opponentIconColorId = j.at("opponentIconColorId").get<int32_t>(); 
    v.durationMs = j.at("durationMs").get<int64_t>(); 
    v.opponentShortName = j.at("opponentShortName").get<std::string>(); 
    v.loserBracket = j.at("loserBracket").get<bool>(); 
    v.round = j.at("round").get<int32_t>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>(); 
    v.opponentIconId = j.at("opponentIconId").get<int32_t>(); 
    v.win = j.at("win").get<bool>(); 
  }
} 