#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGameflowGameflowProcessInfo { 
    uint32_t pid;
    std::vector<std::string> rawArgs; 
  };
  void to_json(json& j, const LolGameflowGameflowProcessInfo& v) {
    j["pid"] = v.pid; 
    j["rawArgs"] = v.rawArgs; 
  }
  void from_json(const json& j, LolGameflowGameflowProcessInfo& v) {
    v.pid = j.at("pid").get<uint32_t>(); 
    v.rawArgs = j.at("rawArgs").get<std::vector<std::string>>(); 
  }
}