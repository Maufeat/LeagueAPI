#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerPreferences { 
    std::string hash;
    std::string data;
    std::string type;
    std::string version; 
  };
  inline void to_json(json& j, const PlayerPreferences& v) {
    j["hash"] = v.hash; 
    j["data"] = v.data; 
    j["type"] = v.type; 
    j["version"] = v.version; 
  }
  inline void from_json(const json& j, PlayerPreferences& v) {
    v.hash = j.at("hash").get<std::string>(); 
    v.data = j.at("data").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
  }
}