#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMapsMaps { 
    std::string gameMutator;
    json properties;
    int64_t id;
    std::map<std::string, std::string> assets;
    std::string name;
    std::string platformName;
    std::string description;
    std::string gameModeDescription;
    std::string gameModeName;
    std::string gameModeShortName;
    std::string platformId;
    bool isRGM;
    bool isDefault;
    std::string gameMode; 
  };
  void to_json(json& j, const LolMapsMaps& v) {
  j["gameMutator"] = v.gameMutator; 
  j["properties"] = v.properties; 
  j["id"] = v.id; 
  j["assets"] = v.assets; 
  j["name"] = v.name; 
  j["platformName"] = v.platformName; 
  j["description"] = v.description; 
  j["gameModeDescription"] = v.gameModeDescription; 
  j["gameModeName"] = v.gameModeName; 
  j["gameModeShortName"] = v.gameModeShortName; 
  j["platformId"] = v.platformId; 
  j["isRGM"] = v.isRGM; 
  j["isDefault"] = v.isDefault; 
  j["gameMode"] = v.gameMode; 
  }
  void from_json(const json& j, LolMapsMaps& v) {
  v.gameMutator = j.at("gameMutator").get<std::string>(); 
  v.properties = j.at("properties").get<json>(); 
  v.id = j.at("id").get<int64_t>(); 
  v.assets = j.at("assets").get<std::map<std::string, std::string>>(); 
  v.name = j.at("name").get<std::string>(); 
  v.platformName = j.at("platformName").get<std::string>(); 
  v.description = j.at("description").get<std::string>(); 
  v.gameModeDescription = j.at("gameModeDescription").get<std::string>(); 
  v.gameModeName = j.at("gameModeName").get<std::string>(); 
  v.gameModeShortName = j.at("gameModeShortName").get<std::string>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  v.isRGM = j.at("isRGM").get<bool>(); 
  v.isDefault = j.at("isDefault").get<bool>(); 
  v.gameMode = j.at("gameMode").get<std::string>(); 
  }
}