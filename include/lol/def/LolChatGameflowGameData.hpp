#pragma once
#include "../base_def.hpp" 
#include "LolChatQueue.hpp"
#include "LolChatTeamPlayerEntry.hpp"
#include "LolChatChampSelection.hpp"
namespace lol {
  struct LolChatGameflowGameData { 
    LolChatQueue queue;
    std::vector<LolChatTeamPlayerEntry> teamOne;
    std::vector<LolChatTeamPlayerEntry> teamTwo;
    std::vector<LolChatChampSelection> playerChampionSelections; 
  };
  inline void to_json(json& j, const LolChatGameflowGameData& v) {
    j["queue"] = v.queue; 
    j["teamOne"] = v.teamOne; 
    j["teamTwo"] = v.teamTwo; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
  }
  inline void from_json(const json& j, LolChatGameflowGameData& v) {
    v.queue = j.at("queue").get<LolChatQueue>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry>>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection>>(); 
  }
}