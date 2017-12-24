#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameflowGameflowGameMap { 
    std::string platformName;
    std::string gameModeShortName;
    std::string platformId;
    std::string name;
    std::string gameModeName;
    json assets;
    std::string gameMutator;
    std::string gameMode;
    json properties;
    int64_t id;
    std::string description;
    bool isRGM; 
  };
  inline void to_json(json& j, const LolGameflowGameflowGameMap& v) {
    j["platformName"] = v.platformName; 
    j["gameModeShortName"] = v.gameModeShortName; 
    j["platformId"] = v.platformId; 
    j["name"] = v.name; 
    j["gameModeName"] = v.gameModeName; 
    j["assets"] = v.assets; 
    j["gameMutator"] = v.gameMutator; 
    j["gameMode"] = v.gameMode; 
    j["properties"] = v.properties; 
    j["id"] = v.id; 
    j["description"] = v.description; 
    j["isRGM"] = v.isRGM; 
  }
  inline void from_json(const json& j, LolGameflowGameflowGameMap& v) {
    v.platformName = j.at("platformName").get<std::string>(); 
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.gameModeName = j.at("gameModeName").get<std::string>(); 
    v.assets = j.at("assets").get<json>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.properties = j.at("properties").get<json>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.isRGM = j.at("isRGM").get<bool>(); 
  }
}