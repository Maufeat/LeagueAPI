#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolReplaysGameflowAvailability { 
    std::string state; 
  };
  void to_json(json& j, const LolReplaysGameflowAvailability& v) {
    j["state"] = v.state; 
  }
  void from_json(const json& j, LolReplaysGameflowAvailability& v) {
    v.state = j.at("state").get<std::string>(); 
  }
}