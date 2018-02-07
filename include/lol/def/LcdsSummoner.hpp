#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsSummoner { 
    uint64_t sumId;
    std::string name; 
  };
  inline void to_json(json& j, const LcdsSummoner& v) {
    j["sumId"] = v.sumId; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LcdsSummoner& v) {
    v.sumId = j.at("sumId").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}