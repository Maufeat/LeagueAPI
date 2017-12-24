#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatPlayerPreferences { 
    std::string hash;
    uint64_t modified;
    std::string data;
    std::string type; 
  };
  inline void to_json(json& j, const LolChatPlayerPreferences& v) {
    j["hash"] = v.hash; 
    j["modified"] = v.modified; 
    j["data"] = v.data; 
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, LolChatPlayerPreferences& v) {
    v.hash = j.at("hash").get<std::string>(); 
    v.modified = j.at("modified").get<uint64_t>(); 
    v.data = j.at("data").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
  }
}