#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLoadoutsInventoryDTO.hpp>"

namespace leagueapi {
  struct LolLoadoutsInventoryResponseDTO { /**/ 
    LolLoadoutsInventoryDTO data;/**/
  };
  static void to_json(json& j, const LolLoadoutsInventoryResponseDTO& v) { 
    j["data"] = v.data;
  }
  static void from_json(const json& j, LolLoadoutsInventoryResponseDTO& v) { 
    v.data = j.at("data").get<LolLoadoutsInventoryDTO>(); 
  }
} 