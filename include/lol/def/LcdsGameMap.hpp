#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsGameMap { 
    int32_t mapId;
    std::string name;
    std::string displayName;
    std::string description;
    int32_t minCustomPlayers;
    int32_t totalPlayers; 
  };
  inline void to_json(json& j, const LcdsGameMap& v) {
    j["mapId"] = v.mapId; 
    j["name"] = v.name; 
    j["displayName"] = v.displayName; 
    j["description"] = v.description; 
    j["minCustomPlayers"] = v.minCustomPlayers; 
    j["totalPlayers"] = v.totalPlayers; 
  }
  inline void from_json(const json& j, LcdsGameMap& v) {
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.minCustomPlayers = j.at("minCustomPlayers").get<int32_t>(); 
    v.totalPlayers = j.at("totalPlayers").get<int32_t>(); 
  }
}