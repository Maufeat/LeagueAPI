#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsGameMap { 
    std::string displayName;
    int32_t totalPlayers;
    int32_t mapId;
    std::string description;
    std::string name;
    int32_t minCustomPlayers; 
  };
  void to_json(json& j, const LcdsGameMap& v) {
    j["displayName"] = v.displayName; 
    j["totalPlayers"] = v.totalPlayers; 
    j["mapId"] = v.mapId; 
    j["description"] = v.description; 
    j["name"] = v.name; 
    j["minCustomPlayers"] = v.minCustomPlayers; 
  }
  void from_json(const json& j, LcdsGameMap& v) {
    v.displayName = j.at("displayName").get<std::string>(); 
    v.totalPlayers = j.at("totalPlayers").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.minCustomPlayers = j.at("minCustomPlayers").get<int32_t>(); 
  }
}