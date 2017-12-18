#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerDTO { 
    int32_t tickets; 
  };
  inline void to_json(json& j, const PlayerDTO& v) {
    j["tickets"] = v.tickets; 
  }
  inline void from_json(const json& j, PlayerDTO& v) {
    v.tickets = j.at("tickets").get<int32_t>(); 
  }
}