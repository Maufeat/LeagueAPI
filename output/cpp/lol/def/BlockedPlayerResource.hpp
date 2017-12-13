#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BlockedPlayerResource { 
    std::string name;
    uint64_t id; 
  };
  void to_json(json& j, const BlockedPlayerResource& v) {
  j["name"] = v.name; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, BlockedPlayerResource& v) {
  v.name = j.at("name").get<std::string>(); 
  v.id = j.at("id").get<uint64_t>(); 
  }
}