#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ProcessControlProcess { 
    std::string status;
    std::optional<float> restart_countdown_seconds; 
  };
  inline void to_json(json& j, const ProcessControlProcess& v) {
    j["status"] = v.status; 
    if(v.restart_countdown_seconds)
      j["restart-countdown-seconds"] = *v.restart_countdown_seconds;
  }
  inline void from_json(const json& j, ProcessControlProcess& v) {
    v.status = j.at("status").get<std::string>(); 
    if(auto it = j.find("restart-countdown-seconds"); it != j.end() && !it->is_null())
      v.restart_countdown_seconds = it->get<std::optional<float>>(); 
  }
}