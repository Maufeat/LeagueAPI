#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsGameMap.hpp>
namespace lol {
  struct LcdsPracticeGameConfig { 
    int32_t maxNumPlayers;
    LcdsGameMap gameMap;
    std::vector<std::string> gameMutators;
    std::string gamePassword;
    int32_t gameTypeConfig;
    std::string allowSpectators;
    std::string gameMode;
    std::optional<std::string> passbackUrl;
    std::optional<std::string> passbackDataPacket;
    std::string region;
    std::string gameName; 
  };
  void to_json(json& j, const LcdsPracticeGameConfig& v) {
  j["maxNumPlayers"] = v.maxNumPlayers; 
  j["gameMap"] = v.gameMap; 
  j["gameMutators"] = v.gameMutators; 
  j["gamePassword"] = v.gamePassword; 
  j["gameTypeConfig"] = v.gameTypeConfig; 
  j["allowSpectators"] = v.allowSpectators; 
  j["gameMode"] = v.gameMode; 
  j["passbackUrl"] = v.passbackUrl; 
  j["passbackDataPacket"] = v.passbackDataPacket; 
  j["region"] = v.region; 
  j["gameName"] = v.gameName; 
  }
  void from_json(const json& j, LcdsPracticeGameConfig& v) {
  v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
  v.gameMap = j.at("gameMap").get<LcdsGameMap>(); 
  v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
  v.gamePassword = j.at("gamePassword").get<std::string>(); 
  v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>(); 
  v.allowSpectators = j.at("allowSpectators").get<std::string>(); 
  v.gameMode = j.at("gameMode").get<std::string>(); 
  v.passbackUrl = j.at("passbackUrl").get<std::optional<std::string>>(); 
  v.passbackDataPacket = j.at("passbackDataPacket").get<std::optional<std::string>>(); 
  v.region = j.at("region").get<std::string>(); 
  v.gameName = j.at("gameName").get<std::string>(); 
  }
}