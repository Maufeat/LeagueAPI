#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolReplaysGameflowAvailability { 
    std::string state; 
  };
  inline void to_json(json& j, const LolReplaysGameflowAvailability& v) {
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolReplaysGameflowAvailability& v) {
    v.state = j.at("state").get<std::string>(); 
  }
}