#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolMatchHistoryMatchHistoryGameList.hpp>"

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryList { /**/ 
    LolMatchHistoryMatchHistoryGameList games;/**/
    uint64_t accountId;/**/
    std::string platformId;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryList& v) { 
    j["games"] = v.games;
    j["accountId"] = v.accountId;
    j["platformId"] = v.platformId;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryList& v) { 
    v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
} 