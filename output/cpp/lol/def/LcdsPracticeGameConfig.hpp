#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsGameMap.hpp>
namespace lol {
  struct LcdsPracticeGameConfig { 
    LcdsGameMap gameMap;
    std::vector<std::string> gameMutators;
    int32_t gameTypeConfig;
    std::string gamePassword;
    int32_t maxNumPlayers;
    std::optional<std::string> passbackDataPacket;
    std::optional<std::string> passbackUrl;
    std::string gameName;
    std::string allowSpectators;
    std::string region;
    std::string gameMode; 
  };
  void to_json(json& j, const LcdsPracticeGameConfig& v) {
  j["gameMap"] = v.gameMap; 
  j["gameMutators"] = v.gameMutators; 
  j["gameTypeConfig"] = v.gameTypeConfig; 
  j["gamePassword"] = v.gamePassword; 
  j["maxNumPlayers"] = v.maxNumPlayers; 
  j["passbackDataPacket"] = v.passbackDataPacket; 
  j["passbackUrl"] = v.passbackUrl; 
  j["gameName"] = v.gameName; 
  j["allowSpectators"] = v.allowSpectators; 
  j["region"] = v.region; 
  j["gameMode"] = v.gameMode; 
  }
  void from_json(const json& j, LcdsPracticeGameConfig& v) {
  v.gameMap = j.at("gameMap").get<LcdsGameMap>(); 
  v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
  v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>(); 
  v.gamePassword = j.at("gamePassword").get<std::string>(); 
  v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
  v.passbackDataPacket = j.at("passbackDataPacket").get<std::optional<std::string>>(); 
  v.passbackUrl = j.at("passbackUrl").get<std::optional<std::string>>(); 
  v.gameName = j.at("gameName").get<std::string>(); 
  v.allowSpectators = j.at("allowSpectators").get<std::string>(); 
  v.region = j.at("region").get<std::string>(); 
  v.gameMode = j.at("gameMode").get<std::string>(); 
  }
}