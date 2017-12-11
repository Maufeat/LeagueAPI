#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LcdsGameMap { /**/ 
    int32_t minCustomPlayers;/**/
    std::string description;/**/
    std::string name;/**/
    int32_t totalPlayers;/**/
    int32_t mapId;/**/
    std::string displayName;/**/
  };
  static void to_json(json& j, const LcdsGameMap& v) { 
    j["minCustomPlayers"] = v.minCustomPlayers;
    j["description"] = v.description;
    j["name"] = v.name;
    j["totalPlayers"] = v.totalPlayers;
    j["mapId"] = v.mapId;
    j["displayName"] = v.displayName;
  }
  static void from_json(const json& j, LcdsGameMap& v) { 
    v.minCustomPlayers = j.at("minCustomPlayers").get<int32_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.totalPlayers = j.at("totalPlayers").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
  }
} 