#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMapsMaps { 
    std::string platformName;
    std::string gameModeDescription;
    std::string gameModeShortName;
    int64_t id;
    std::string platformId;
    std::string name;
    std::string gameModeName;
    std::map<std::string, std::string> assets;
    bool isDefault;
    std::string gameMutator;
    std::string gameMode;
    json properties;
    std::string description;
    bool isRGM; 
  };
  inline void to_json(json& j, const LolMapsMaps& v) {
    j["platformName"] = v.platformName; 
    j["gameModeDescription"] = v.gameModeDescription; 
    j["gameModeShortName"] = v.gameModeShortName; 
    j["id"] = v.id; 
    j["platformId"] = v.platformId; 
    j["name"] = v.name; 
    j["gameModeName"] = v.gameModeName; 
    j["assets"] = v.assets; 
    j["isDefault"] = v.isDefault; 
    j["gameMutator"] = v.gameMutator; 
    j["gameMode"] = v.gameMode; 
    j["properties"] = v.properties; 
    j["description"] = v.description; 
    j["isRGM"] = v.isRGM; 
  }
  inline void from_json(const json& j, LolMapsMaps& v) {
    v.platformName = j.at("platformName").get<std::string>(); 
    v.gameModeDescription = j.at("gameModeDescription").get<std::string>(); 
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.gameModeName = j.at("gameModeName").get<std::string>(); 
    v.assets = j.at("assets").get<std::map<std::string, std::string>>(); 
    v.isDefault = j.at("isDefault").get<bool>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.properties = j.at("properties").get<json>(); 
    v.description = j.at("description").get<std::string>(); 
    v.isRGM = j.at("isRGM").get<bool>(); 
  }
}