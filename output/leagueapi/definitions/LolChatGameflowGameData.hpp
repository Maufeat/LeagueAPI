#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChatQueue.hpp>"
#include "<leagueapi/definitions/LolChatChampSelection.hpp>"
#include "<leagueapi/definitions/LolChatTeamPlayerEntry.hpp>"

namespace leagueapi {
  struct LolChatGameflowGameData { /**/ 
    LolChatQueue queue;/**/
    std::vector<LolChatTeamPlayerEntry> teamOne;/**/
    std::vector<LolChatChampSelection> playerChampionSelections;/**/
    std::vector<LolChatTeamPlayerEntry> teamTwo;/**/
  };
  static void to_json(json& j, const LolChatGameflowGameData& v) { 
    j["queue"] = v.queue;
    j["teamOne"] = v.teamOne;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["teamTwo"] = v.teamTwo;
  }
  static void from_json(const json& j, LolChatGameflowGameData& v) { 
    v.queue = j.at("queue").get<LolChatQueue>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry>>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry>>(); 
  }
} 