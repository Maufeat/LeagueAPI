#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerPreferences { 
    std::string type;
    std::string version;
    std::string data;
    std::string hash; 
  };
  inline void to_json(json& j, const PlayerPreferences& v) {
    j["type"] = v.type; 
    j["version"] = v.version; 
    j["data"] = v.data; 
    j["hash"] = v.hash; 
  }
  inline void from_json(const json& j, PlayerPreferences& v) {
    v.type = j.at("type").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
    v.data = j.at("data").get<std::string>(); 
    v.hash = j.at("hash").get<std::string>(); 
  }
}