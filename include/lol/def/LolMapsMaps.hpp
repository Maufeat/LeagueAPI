#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMapsMaps { 
    std::string name;
    int64_t id;
    std::string description;
    std::string platformName;
    std::string gameMutator;
    bool isDefault;
    bool isRGM;
    std::string gameModeName;
    std::string gameMode;
    std::map<std::string, std::string> assets;
    std::string platformId;
    json properties;
    std::string gameModeShortName;
    std::string gameModeDescription; 
  };
  inline void to_json(json& j, const LolMapsMaps& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["description"] = v.description; 
    j["platformName"] = v.platformName; 
    j["gameMutator"] = v.gameMutator; 
    j["isDefault"] = v.isDefault; 
    j["isRGM"] = v.isRGM; 
    j["gameModeName"] = v.gameModeName; 
    j["gameMode"] = v.gameMode; 
    j["assets"] = v.assets; 
    j["platformId"] = v.platformId; 
    j["properties"] = v.properties; 
    j["gameModeShortName"] = v.gameModeShortName; 
    j["gameModeDescription"] = v.gameModeDescription; 
  }
  inline void from_json(const json& j, LolMapsMaps& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.platformName = j.at("platformName").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.isDefault = j.at("isDefault").get<bool>(); 
    v.isRGM = j.at("isRGM").get<bool>(); 
    v.gameModeName = j.at("gameModeName").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.assets = j.at("assets").get<std::map<std::string, std::string>>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.properties = j.at("properties").get<json>(); 
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>(); 
    v.gameModeDescription = j.at("gameModeDescription").get<std::string>(); 
  }
}