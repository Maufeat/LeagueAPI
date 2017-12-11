#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlayerDTO { /**/ 
    int32_t tickets;/**/
  };
  static void to_json(json& j, const PlayerDTO& v) { 
    j["tickets"] = v.tickets;
  }
  static void from_json(const json& j, PlayerDTO& v) { 
    v.tickets = j.at("tickets").get<int32_t>(); 
  }
} 