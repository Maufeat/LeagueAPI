#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ProcessControlProcess { 
    std::optional<float> restart_countdown_seconds;
    std::string status; 
  };
  void to_json(json& j, const ProcessControlProcess& v) {
    if(v.restart_countdown_seconds)
      j["restart-countdown-seconds"] = *v.restart_countdown_seconds;
    j["status"] = v.status; 
  }
  void from_json(const json& j, ProcessControlProcess& v) {
    if(auto it = j.find("restart-countdown-seconds"); it != j.end() && !it->is_null())
      v.restart_countdown_seconds = it->get<std::optional<float>>(); 
    v.status = j.at("status").get<std::string>(); 
  }
}