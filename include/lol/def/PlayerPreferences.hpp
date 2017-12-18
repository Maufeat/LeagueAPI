#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerPreferences { 
    std::string hash;
    std::string version;
    std::string type;
    std::string data; 
  };
  inline void to_json(json& j, const PlayerPreferences& v) {
    j["hash"] = v.hash; 
    j["version"] = v.version; 
    j["type"] = v.type; 
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, PlayerPreferences& v) {
    v.hash = j.at("hash").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.data = j.at("data").get<std::string>(); 
  }
}