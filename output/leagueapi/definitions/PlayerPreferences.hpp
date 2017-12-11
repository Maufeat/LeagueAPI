#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlayerPreferences { /**/ 
    std::string type;/**/
    std::string hash;/**/
    std::string version;/**/
    std::string data;/**/
  };
  static void to_json(json& j, const PlayerPreferences& v) { 
    j["type"] = v.type;
    j["hash"] = v.hash;
    j["version"] = v.version;
    j["data"] = v.data;
  }
  static void from_json(const json& j, PlayerPreferences& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.hash = j.at("hash").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
    v.data = j.at("data").get<std::string>(); 
  }
} 