#pragma once
#include "../base_def.hpp" 
#include "LolChatTeamPlayerEntry.hpp"
#include "LolChatQueue.hpp"
#include "LolChatChampSelection.hpp"
namespace lol {
  struct LolChatGameflowGameData { 
    std::vector<LolChatTeamPlayerEntry> teamOne;
    std::vector<LolChatTeamPlayerEntry> teamTwo;
    std::vector<LolChatChampSelection> playerChampionSelections;
    LolChatQueue queue; 
  };
  inline void to_json(json& j, const LolChatGameflowGameData& v) {
    j["teamOne"] = v.teamOne; 
    j["teamTwo"] = v.teamTwo; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["queue"] = v.queue; 
  }
  inline void from_json(const json& j, LolChatGameflowGameData& v) {
    v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry>>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection>>(); 
    v.queue = j.at("queue").get<LolChatQueue>(); 
  }
}