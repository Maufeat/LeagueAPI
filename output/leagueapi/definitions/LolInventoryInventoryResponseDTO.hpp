#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolInventoryInventoryDTO.hpp>"

namespace leagueapi {
  struct LolInventoryInventoryResponseDTO { /**/ 
    LolInventoryInventoryDTO data;/**/
  };
  static void to_json(json& j, const LolInventoryInventoryResponseDTO& v) { 
    j["data"] = v.data;
  }
  static void from_json(const json& j, LolInventoryInventoryResponseDTO& v) { 
    v.data = j.at("data").get<LolInventoryInventoryDTO>(); 
  }
} 