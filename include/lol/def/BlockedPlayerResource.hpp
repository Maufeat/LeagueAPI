#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BlockedPlayerResource { 
    uint64_t id;
    std::string name; 
  };
  inline void to_json(json& j, const BlockedPlayerResource& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, BlockedPlayerResource& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}