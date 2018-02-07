#pragma once
#include "../base_def.hpp" 
#include "PlayerMissionDTO.hpp"
#include "SeriesDTO.hpp"
namespace lol {
  struct LolMissionsPlayerUpdateResponse { 
    std::vector<PlayerMissionDTO> playerMissions;
    std::vector<SeriesDTO> playerSeries; 
  };
  inline void to_json(json& j, const LolMissionsPlayerUpdateResponse& v) {
    j["playerMissions"] = v.playerMissions; 
    j["playerSeries"] = v.playerSeries; 
  }
  inline void from_json(const json& j, LolMissionsPlayerUpdateResponse& v) {
    v.playerMissions = j.at("playerMissions").get<std::vector<PlayerMissionDTO>>(); 
    v.playerSeries = j.at("playerSeries").get<std::vector<SeriesDTO>>(); 
  }
}