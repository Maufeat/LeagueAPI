#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameflowGameflowGameMap { 
    std::string name;
    int64_t id;
    std::string description;
    json assets;
    std::string gameMutator;
    bool isRGM;
    std::string platformName;
    std::string gameMode;
    std::string platformId;
    json properties;
    std::string gameModeShortName;
    std::string gameModeName; 
  };
  inline void to_json(json& j, const LolGameflowGameflowGameMap& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["description"] = v.description; 
    j["assets"] = v.assets; 
    j["gameMutator"] = v.gameMutator; 
    j["isRGM"] = v.isRGM; 
    j["platformName"] = v.platformName; 
    j["gameMode"] = v.gameMode; 
    j["platformId"] = v.platformId; 
    j["properties"] = v.properties; 
    j["gameModeShortName"] = v.gameModeShortName; 
    j["gameModeName"] = v.gameModeName; 
  }
  inline void from_json(const json& j, LolGameflowGameflowGameMap& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.assets = j.at("assets").get<json>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.isRGM = j.at("isRGM").get<bool>(); 
    v.platformName = j.at("platformName").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.properties = j.at("properties").get<json>(); 
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>(); 
    v.gameModeName = j.at("gameModeName").get<std::string>(); 
  }
}