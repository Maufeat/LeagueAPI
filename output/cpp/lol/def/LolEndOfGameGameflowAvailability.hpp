#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameGameflowAvailability { 
    std::string state; 
  };
  inline void to_json(json& j, const LolEndOfGameGameflowAvailability& v) {
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolEndOfGameGameflowAvailability& v) {
    v.state = j.at("state").get<std::string>(); 
  }
}