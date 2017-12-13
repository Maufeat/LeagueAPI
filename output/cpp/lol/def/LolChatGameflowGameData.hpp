#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatTeamPlayerEntry.hpp>
#include <lol/def/LolChatQueue.hpp>
#include <lol/def/LolChatChampSelection.hpp>
namespace lol {
  struct LolChatGameflowGameData { 
    LolChatQueue queue;
    std::vector<LolChatTeamPlayerEntry> teamOne;
    std::vector<LolChatChampSelection> playerChampionSelections;
    std::vector<LolChatTeamPlayerEntry> teamTwo; 
  };
  void to_json(json& j, const LolChatGameflowGameData& v) {
  j["queue"] = v.queue; 
  j["teamOne"] = v.teamOne; 
  j["playerChampionSelections"] = v.playerChampionSelections; 
  j["teamTwo"] = v.teamTwo; 
  }
  void from_json(const json& j, LolChatGameflowGameData& v) {
  v.queue = j.at("queue").get<LolChatQueue>(); 
  v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry>>(); 
  v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection>>(); 
  v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry>>(); 
  }
}