#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameflowGameflowGameMap { 
    int64_t id;
    std::string name;
    std::string mapStringId;
    std::string gameMode;
    std::string gameModeName;
    std::string gameModeShortName;
    std::string gameMutator;
    bool isRGM;
    std::string description;
    std::string platformId;
    std::string platformName;
    json assets;
    json properties; 
  };
  inline void to_json(json& j, const LolGameflowGameflowGameMap& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["mapStringId"] = v.mapStringId; 
    j["gameMode"] = v.gameMode; 
    j["gameModeName"] = v.gameModeName; 
    j["gameModeShortName"] = v.gameModeShortName; 
    j["gameMutator"] = v.gameMutator; 
    j["isRGM"] = v.isRGM; 
    j["description"] = v.description; 
    j["platformId"] = v.platformId; 
    j["platformName"] = v.platformName; 
    j["assets"] = v.assets; 
    j["properties"] = v.properties; 
  }
  inline void from_json(const json& j, LolGameflowGameflowGameMap& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.mapStringId = j.at("mapStringId").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameModeName = j.at("gameModeName").get<std::string>(); 
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.isRGM = j.at("isRGM").get<bool>(); 
    v.description = j.at("description").get<std::string>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.platformName = j.at("platformName").get<std::string>(); 
    v.assets = j.at("assets").get<json>(); 
    v.properties = j.at("properties").get<json>(); 
  }
}