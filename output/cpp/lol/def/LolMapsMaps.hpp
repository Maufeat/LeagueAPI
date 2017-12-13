#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMapsMaps { 
    std::string gameMutator;
    std::string platformId;
    json properties;
    std::string gameMode;
    std::string name;
    std::string platformName;
    bool isDefault;
    int64_t id;
    std::string gameModeShortName;
    std::string gameModeName;
    bool isRGM;
    std::map<std::string, std::string> assets;
    std::string description;
    std::string gameModeDescription; 
  };
  void to_json(json& j, const LolMapsMaps& v) {
    j["gameMutator"] = v.gameMutator; 
    j["platformId"] = v.platformId; 
    j["properties"] = v.properties; 
    j["gameMode"] = v.gameMode; 
    j["name"] = v.name; 
    j["platformName"] = v.platformName; 
    j["isDefault"] = v.isDefault; 
    j["id"] = v.id; 
    j["gameModeShortName"] = v.gameModeShortName; 
    j["gameModeName"] = v.gameModeName; 
    j["isRGM"] = v.isRGM; 
    j["assets"] = v.assets; 
    j["description"] = v.description; 
    j["gameModeDescription"] = v.gameModeDescription; 
  }
  void from_json(const json& j, LolMapsMaps& v) {
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.properties = j.at("properties").get<json>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.platformName = j.at("platformName").get<std::string>(); 
    v.isDefault = j.at("isDefault").get<bool>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>(); 
    v.gameModeName = j.at("gameModeName").get<std::string>(); 
    v.isRGM = j.at("isRGM").get<bool>(); 
    v.assets = j.at("assets").get<std::map<std::string, std::string>>(); 
    v.description = j.at("description").get<std::string>(); 
    v.gameModeDescription = j.at("gameModeDescription").get<std::string>(); 
  }
}