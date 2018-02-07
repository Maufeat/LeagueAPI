#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMapsMaps { 
    int64_t id;
    bool isDefault;
    std::string gameMode;
    std::string gameModeName;
    std::string gameModeShortName;
    std::string gameModeDescription;
    std::string gameMutator;
    bool isRGM;
    std::string name;
    std::string description;
    std::string mapStringId;
    std::string platformId;
    std::string platformName;
    std::map<std::string, std::string> assets;
    json properties; 
  };
  inline void to_json(json& j, const LolMapsMaps& v) {
    j["id"] = v.id; 
    j["isDefault"] = v.isDefault; 
    j["gameMode"] = v.gameMode; 
    j["gameModeName"] = v.gameModeName; 
    j["gameModeShortName"] = v.gameModeShortName; 
    j["gameModeDescription"] = v.gameModeDescription; 
    j["gameMutator"] = v.gameMutator; 
    j["isRGM"] = v.isRGM; 
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["mapStringId"] = v.mapStringId; 
    j["platformId"] = v.platformId; 
    j["platformName"] = v.platformName; 
    j["assets"] = v.assets; 
    j["properties"] = v.properties; 
  }
  inline void from_json(const json& j, LolMapsMaps& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.isDefault = j.at("isDefault").get<bool>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameModeName = j.at("gameModeName").get<std::string>(); 
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>(); 
    v.gameModeDescription = j.at("gameModeDescription").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.isRGM = j.at("isRGM").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.mapStringId = j.at("mapStringId").get<std::string>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.platformName = j.at("platformName").get<std::string>(); 
    v.assets = j.at("assets").get<std::map<std::string, std::string>>(); 
    v.properties = j.at("properties").get<json>(); 
  }
}