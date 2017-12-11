#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/PlayerLootDTO.hpp>"

namespace leagueapi {
  struct PlayerLootResultDTO { /**/ 
    std::vector<PlayerLootDTO> removed;/**/
    std::string details;/**/
    std::vector<PlayerLootDTO> added;/**/
    std::string status;/**/
    std::vector<std::string> redeemed;/**/
  };
  static void to_json(json& j, const PlayerLootResultDTO& v) { 
    j["removed"] = v.removed;
    j["details"] = v.details;
    j["added"] = v.added;
    j["status"] = v.status;
    j["redeemed"] = v.redeemed;
  }
  static void from_json(const json& j, PlayerLootResultDTO& v) { 
    v.removed = j.at("removed").get<std::vector<PlayerLootDTO>>(); 
    v.details = j.at("details").get<std::string>(); 
    v.added = j.at("added").get<std::vector<PlayerLootDTO>>(); 
    v.status = j.at("status").get<std::string>(); 
    v.redeemed = j.at("redeemed").get<std::vector<std::string>>(); 
  }
} 