#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEndOfGameGameflowAvailability { 
    std::string state; 
  };
  void to_json(json& j, const LolEndOfGameGameflowAvailability& v) {
    j["state"] = v.state; 
  }
  void from_json(const json& j, LolEndOfGameGameflowAvailability& v) {
    v.state = j.at("state").get<std::string>(); 
  }
}