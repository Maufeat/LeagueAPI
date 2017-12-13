#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ProcessControlProcess { 
    std::optional<float> restart_countdown_seconds;
    std::string status; 
  };
  void to_json(json& j, const ProcessControlProcess& v) {
  j["restart_countdown_seconds"] = v.restart_countdown_seconds; 
  j["status"] = v.status; 
  }
  void from_json(const json& j, ProcessControlProcess& v) {
  v.restart_countdown_seconds = j.at("restart_countdown_seconds").get<std::optional<float>>(); 
  v.status = j.at("status").get<std::string>(); 
  }
}