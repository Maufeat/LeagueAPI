#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGameflowGameflowGameMap { 
    std::string gameMutator;
    json properties;
    int64_t id;
    json assets;
    std::string platformId;
    std::string name;
    std::string gameModeShortName;
    std::string platformName;
    bool isRGM;
    std::string gameMode;
    std::string description;
    std::string gameModeName; 
  };
  void to_json(json& j, const LolGameflowGameflowGameMap& v) {
  j["gameMutator"] = v.gameMutator; 
  j["properties"] = v.properties; 
  j["id"] = v.id; 
  j["assets"] = v.assets; 
  j["platformId"] = v.platformId; 
  j["name"] = v.name; 
  j["gameModeShortName"] = v.gameModeShortName; 
  j["platformName"] = v.platformName; 
  j["isRGM"] = v.isRGM; 
  j["gameMode"] = v.gameMode; 
  j["description"] = v.description; 
  j["gameModeName"] = v.gameModeName; 
  }
  void from_json(const json& j, LolGameflowGameflowGameMap& v) {
  v.gameMutator = j.at("gameMutator").get<std::string>(); 
  v.properties = j.at("properties").get<json>(); 
  v.id = j.at("id").get<int64_t>(); 
  v.assets = j.at("assets").get<json>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.gameModeShortName = j.at("gameModeShortName").get<std::string>(); 
  v.platformName = j.at("platformName").get<std::string>(); 
  v.isRGM = j.at("isRGM").get<bool>(); 
  v.gameMode = j.at("gameMode").get<std::string>(); 
  v.description = j.at("description").get<std::string>(); 
  v.gameModeName = j.at("gameModeName").get<std::string>(); 
  }
}