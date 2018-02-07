#pragma once
#include "../base_def.hpp" 
#include "LcdsGameMap.hpp"
namespace lol {
  struct LcdsPracticeGameConfig { 
    std::string gameName;
    std::string gameMode;
    LcdsGameMap gameMap;
    int32_t maxNumPlayers;
    int32_t gameTypeConfig;
    std::string gamePassword;
    std::string allowSpectators;
    std::optional<std::string> passbackUrl;
    std::optional<std::string> passbackDataPacket;
    std::vector<std::string> gameMutators;
    std::string region; 
  };
  inline void to_json(json& j, const LcdsPracticeGameConfig& v) {
    j["gameName"] = v.gameName; 
    j["gameMode"] = v.gameMode; 
    j["gameMap"] = v.gameMap; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["gamePassword"] = v.gamePassword; 
    j["allowSpectators"] = v.allowSpectators; 
    if(v.passbackUrl)
      j["passbackUrl"] = *v.passbackUrl;
    if(v.passbackDataPacket)
      j["passbackDataPacket"] = *v.passbackDataPacket;
    j["gameMutators"] = v.gameMutators; 
    j["region"] = v.region; 
  }
  inline void from_json(const json& j, LcdsPracticeGameConfig& v) {
    v.gameName = j.at("gameName").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameMap = j.at("gameMap").get<LcdsGameMap>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>(); 
    v.gamePassword = j.at("gamePassword").get<std::string>(); 
    v.allowSpectators = j.at("allowSpectators").get<std::string>(); 
    if(auto it = j.find("passbackUrl"); it != j.end() && !it->is_null())
      v.passbackUrl = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("passbackDataPacket"); it != j.end() && !it->is_null())
      v.passbackDataPacket = it->get<std::optional<std::string>>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.region = j.at("region").get<std::string>(); 
  }
}