#pragma once
#include "../base_def.hpp" 
#include "LcdsGameMap.hpp"
namespace lol {
  struct LcdsPracticeGameConfig { 
    std::string region;
    int32_t gameTypeConfig;
    int32_t maxNumPlayers;
    std::string gameMode;
    std::string allowSpectators;
    std::optional<std::string> passbackUrl;
    LcdsGameMap gameMap;
    std::optional<std::string> passbackDataPacket;
    std::string gameName;
    std::vector<std::string> gameMutators;
    std::string gamePassword; 
  };
  inline void to_json(json& j, const LcdsPracticeGameConfig& v) {
    j["region"] = v.region; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["gameMode"] = v.gameMode; 
    j["allowSpectators"] = v.allowSpectators; 
    if(v.passbackUrl)
      j["passbackUrl"] = *v.passbackUrl;
    j["gameMap"] = v.gameMap; 
    if(v.passbackDataPacket)
      j["passbackDataPacket"] = *v.passbackDataPacket;
    j["gameName"] = v.gameName; 
    j["gameMutators"] = v.gameMutators; 
    j["gamePassword"] = v.gamePassword; 
  }
  inline void from_json(const json& j, LcdsPracticeGameConfig& v) {
    v.region = j.at("region").get<std::string>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.allowSpectators = j.at("allowSpectators").get<std::string>(); 
    if(auto it = j.find("passbackUrl"); it != j.end() && !it->is_null())
      v.passbackUrl = it->get<std::optional<std::string>>(); 
    v.gameMap = j.at("gameMap").get<LcdsGameMap>(); 
    if(auto it = j.find("passbackDataPacket"); it != j.end() && !it->is_null())
      v.passbackDataPacket = it->get<std::optional<std::string>>(); 
    v.gameName = j.at("gameName").get<std::string>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.gamePassword = j.at("gamePassword").get<std::string>(); 
  }
}