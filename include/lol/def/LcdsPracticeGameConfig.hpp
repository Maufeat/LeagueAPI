#pragma once
#include "../base_def.hpp" 
#include "LcdsGameMap.hpp"
namespace lol {
  struct LcdsPracticeGameConfig { 
    std::string region;
    int32_t maxNumPlayers;
    std::vector<std::string> gameMutators;
    int32_t gameTypeConfig;
    std::string allowSpectators;
    std::string gamePassword;
    std::string gameMode;
    std::string gameName;
    std::optional<std::string> passbackDataPacket;
    LcdsGameMap gameMap;
    std::optional<std::string> passbackUrl; 
  };
  inline void to_json(json& j, const LcdsPracticeGameConfig& v) {
    j["region"] = v.region; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["gameMutators"] = v.gameMutators; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["allowSpectators"] = v.allowSpectators; 
    j["gamePassword"] = v.gamePassword; 
    j["gameMode"] = v.gameMode; 
    j["gameName"] = v.gameName; 
    if(v.passbackDataPacket)
      j["passbackDataPacket"] = *v.passbackDataPacket;
    j["gameMap"] = v.gameMap; 
    if(v.passbackUrl)
      j["passbackUrl"] = *v.passbackUrl;
  }
  inline void from_json(const json& j, LcdsPracticeGameConfig& v) {
    v.region = j.at("region").get<std::string>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>(); 
    v.allowSpectators = j.at("allowSpectators").get<std::string>(); 
    v.gamePassword = j.at("gamePassword").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameName = j.at("gameName").get<std::string>(); 
    if(auto it = j.find("passbackDataPacket"); it != j.end() && !it->is_null())
      v.passbackDataPacket = it->get<std::optional<std::string>>(); 
    v.gameMap = j.at("gameMap").get<LcdsGameMap>(); 
    if(auto it = j.find("passbackUrl"); it != j.end() && !it->is_null())
      v.passbackUrl = it->get<std::optional<std::string>>(); 
  }
}