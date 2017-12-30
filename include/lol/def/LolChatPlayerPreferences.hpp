#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatPlayerPreferences { 
    std::string hash;
    std::string data;
    std::string type;
    uint64_t modified; 
  };
  inline void to_json(json& j, const LolChatPlayerPreferences& v) {
    j["hash"] = v.hash; 
    j["data"] = v.data; 
    j["type"] = v.type; 
    j["modified"] = v.modified; 
  }
  inline void from_json(const json& j, LolChatPlayerPreferences& v) {
    v.hash = j.at("hash").get<std::string>(); 
    v.data = j.at("data").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.modified = j.at("modified").get<uint64_t>(); 
  }
}