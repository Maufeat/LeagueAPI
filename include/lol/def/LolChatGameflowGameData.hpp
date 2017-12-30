#pragma once
#include "../base_def.hpp" 
#include "LolChatChampSelection.hpp"
#include "LolChatTeamPlayerEntry.hpp"
#include "LolChatQueue.hpp"
namespace lol {
  struct LolChatGameflowGameData { 
    std::vector<LolChatChampSelection> playerChampionSelections;
    std::vector<LolChatTeamPlayerEntry> teamOne;
    std::vector<LolChatTeamPlayerEntry> teamTwo;
    LolChatQueue queue; 
  };
  inline void to_json(json& j, const LolChatGameflowGameData& v) {
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["teamOne"] = v.teamOne; 
    j["teamTwo"] = v.teamTwo; 
    j["queue"] = v.queue; 
  }
  inline void from_json(const json& j, LolChatGameflowGameData& v) {
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection>>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry>>(); 
    v.queue = j.at("queue").get<LolChatQueue>(); 
  }
}