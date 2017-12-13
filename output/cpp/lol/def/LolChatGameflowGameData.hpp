#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatQueue.hpp>
#include <lol/def/LolChatChampSelection.hpp>
#include <lol/def/LolChatTeamPlayerEntry.hpp>
namespace lol {
  struct LolChatGameflowGameData { 
    std::vector<LolChatTeamPlayerEntry> teamOne;
    std::vector<LolChatTeamPlayerEntry> teamTwo;
    std::vector<LolChatChampSelection> playerChampionSelections;
    LolChatQueue queue; 
  };
  void to_json(json& j, const LolChatGameflowGameData& v) {
    j["teamOne"] = v.teamOne; 
    j["teamTwo"] = v.teamTwo; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["queue"] = v.queue; 
  }
  void from_json(const json& j, LolChatGameflowGameData& v) {
    v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry>>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection>>(); 
    v.queue = j.at("queue").get<LolChatQueue>(); 
  }
}