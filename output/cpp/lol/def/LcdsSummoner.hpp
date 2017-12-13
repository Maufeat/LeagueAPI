#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsSummoner { 
    std::string name;
    uint64_t sumId; 
  };
  void to_json(json& j, const LcdsSummoner& v) {
    j["name"] = v.name; 
    j["sumId"] = v.sumId; 
  }
  void from_json(const json& j, LcdsSummoner& v) {
    v.name = j.at("name").get<std::string>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
  }
}