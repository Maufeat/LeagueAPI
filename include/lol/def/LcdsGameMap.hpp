#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsGameMap { 
    int32_t minCustomPlayers;
    int32_t mapId;
    int32_t totalPlayers;
    std::string name;
    std::string description;
    std::string displayName; 
  };
  inline void to_json(json& j, const LcdsGameMap& v) {
    j["minCustomPlayers"] = v.minCustomPlayers; 
    j["mapId"] = v.mapId; 
    j["totalPlayers"] = v.totalPlayers; 
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["displayName"] = v.displayName; 
  }
  inline void from_json(const json& j, LcdsGameMap& v) {
    v.minCustomPlayers = j.at("minCustomPlayers").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.totalPlayers = j.at("totalPlayers").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
  }
}