#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChatChatRankedQueue.hpp>"
#include "<leagueapi/definitions/LolChatChatRankedTier.hpp>"

namespace leagueapi {
  struct LolChatChatRankedEntry { /**/ 
    std::string leagueName;/**/
    LolChatChatRankedTier rankedTier;/**/
    LolChatChatRankedQueue rankedQueue;/**/
    uint64_t games;/**/
    uint64_t wins;/**/
    uint64_t division;/**/
  };
  static void to_json(json& j, const LolChatChatRankedEntry& v) { 
    j["leagueName"] = v.leagueName;
    j["rankedTier"] = v.rankedTier;
    j["rankedQueue"] = v.rankedQueue;
    j["games"] = v.games;
    j["wins"] = v.wins;
    j["division"] = v.division;
  }
  static void from_json(const json& j, LolChatChatRankedEntry& v) { 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier>(); 
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue>(); 
    v.games = j.at("games").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.division = j.at("division").get<uint64_t>(); 
  }
} 