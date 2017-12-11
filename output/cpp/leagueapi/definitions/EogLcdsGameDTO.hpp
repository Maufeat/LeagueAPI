#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/BannedChampion.hpp>
#include <leagueapi/definitions/PlayerParticipant.hpp>

namespace leagueapi {
  struct EogLcdsGameDTO { /**/ 
    std::vector<PlayerParticipant> teamOne;/**/
    std::string gameState;/**/
    uint64_t id;/**/
    std::vector<BannedChampion> bannedChampions;/**/
    std::vector<PlayerParticipant> teamTwo;/**/
  };
  static void to_json(json& j, const EogLcdsGameDTO& v) { 
    j["teamOne"] = v.teamOne;
    j["gameState"] = v.gameState;
    j["id"] = v.id;
    j["bannedChampions"] = v.bannedChampions;
    j["teamTwo"] = v.teamTwo;
  }
  static void from_json(const json& j, EogLcdsGameDTO& v) { 
    v.teamOne = j.at("teamOne").get<std::vector<PlayerParticipant>>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<PlayerParticipant>>(); 
  }
} 