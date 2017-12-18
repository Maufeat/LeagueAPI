#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlaytimeReminder { 
    uint32_t hours; 
  };
  inline void to_json(json& j, const PlaytimeReminder& v) {
    j["hours"] = v.hours; 
  }
  inline void from_json(const json& j, PlaytimeReminder& v) {
    v.hours = j.at("hours").get<uint32_t>(); 
  }
}