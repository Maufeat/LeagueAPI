#pragma once
#include "../base_def.hpp" 
#include "LolChatTeamPlayerEntry.hpp"
#include "LolChatQueue.hpp"
#include "LolChatChampSelection.hpp"
namespace lol {
  struct LolChatGameflowGameData { 
    std::vector<LolChatTeamPlayerEntry> teamTwo;
    std::vector<LolChatChampSelection> playerChampionSelections;
    std::vector<LolChatTeamPlayerEntry> teamOne;
    LolChatQueue queue; 
  };
  inline void to_json(json& j, const LolChatGameflowGameData& v) {
    j["teamTwo"] = v.teamTwo; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["teamOne"] = v.teamOne; 
    j["queue"] = v.queue; 
  }
  inline void from_json(const json& j, LolChatGameflowGameData& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry>>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection>>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry>>(); 
    v.queue = j.at("queue").get<LolChatQueue>(); 
  }
}