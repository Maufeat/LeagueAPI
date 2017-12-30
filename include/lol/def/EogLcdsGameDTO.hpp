#pragma once
#include "../base_def.hpp" 
#include "BannedChampion.hpp"
#include "PlayerParticipant.hpp"
namespace lol {
  struct EogLcdsGameDTO { 
    std::vector<PlayerParticipant> teamOne;
    uint64_t id;
    std::string gameState;
    std::vector<PlayerParticipant> teamTwo;
    std::vector<BannedChampion> bannedChampions; 
  };
  inline void to_json(json& j, const EogLcdsGameDTO& v) {
    j["teamOne"] = v.teamOne; 
    j["id"] = v.id; 
    j["gameState"] = v.gameState; 
    j["teamTwo"] = v.teamTwo; 
    j["bannedChampions"] = v.bannedChampions; 
  }
  inline void from_json(const json& j, EogLcdsGameDTO& v) {
    v.teamOne = j.at("teamOne").get<std::vector<PlayerParticipant>>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<PlayerParticipant>>(); 
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion>>(); 
  }
}