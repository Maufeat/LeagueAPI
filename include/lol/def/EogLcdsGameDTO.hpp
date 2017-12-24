#pragma once
#include "../base_def.hpp" 
#include "BannedChampion.hpp"
#include "PlayerParticipant.hpp"
namespace lol {
  struct EogLcdsGameDTO { 
    uint64_t id;
    std::string gameState;
    std::vector<BannedChampion> bannedChampions;
    std::vector<PlayerParticipant> teamOne;
    std::vector<PlayerParticipant> teamTwo; 
  };
  inline void to_json(json& j, const EogLcdsGameDTO& v) {
    j["id"] = v.id; 
    j["gameState"] = v.gameState; 
    j["bannedChampions"] = v.bannedChampions; 
    j["teamOne"] = v.teamOne; 
    j["teamTwo"] = v.teamTwo; 
  }
  inline void from_json(const json& j, EogLcdsGameDTO& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion>>(); 
    v.teamOne = j.at("teamOne").get<std::vector<PlayerParticipant>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<PlayerParticipant>>(); 
  }
}