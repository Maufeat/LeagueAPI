#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MatchmakingLcdsSummoner { 
    std::string name;
    uint64_t sumId; 
  };
  void to_json(json& j, const MatchmakingLcdsSummoner& v) {
    j["name"] = v.name; 
    j["sumId"] = v.sumId; 
  }
  void from_json(const json& j, MatchmakingLcdsSummoner& v) {
    v.name = j.at("name").get<std::string>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
  }
}