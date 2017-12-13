#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlaytimeReminder { 
    uint32_t hours; 
  };
  void to_json(json& j, const PlaytimeReminder& v) {
    j["hours"] = v.hours; 
  }
  void from_json(const json& j, PlaytimeReminder& v) {
    v.hours = j.at("hours").get<uint32_t>(); 
  }
}