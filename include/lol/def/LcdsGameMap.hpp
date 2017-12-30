#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsGameMap { 
    std::string name;
    std::string description;
    int32_t mapId;
    int32_t minCustomPlayers;
    std::string displayName;
    int32_t totalPlayers; 
  };
  inline void to_json(json& j, const LcdsGameMap& v) {
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["mapId"] = v.mapId; 
    j["minCustomPlayers"] = v.minCustomPlayers; 
    j["displayName"] = v.displayName; 
    j["totalPlayers"] = v.totalPlayers; 
  }
  inline void from_json(const json& j, LcdsGameMap& v) {
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.minCustomPlayers = j.at("minCustomPlayers").get<int32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.totalPlayers = j.at("totalPlayers").get<int32_t>(); 
  }
}