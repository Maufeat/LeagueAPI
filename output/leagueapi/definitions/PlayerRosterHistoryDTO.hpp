#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/RosterMemberDTO.hpp>"

namespace leagueapi {
  struct PlayerRosterHistoryDTO { /**/ 
    std::vector<RosterMemberDTO> rosters;/**/
  };
  static void to_json(json& j, const PlayerRosterHistoryDTO& v) { 
    j["rosters"] = v.rosters;
  }
  static void from_json(const json& j, PlayerRosterHistoryDTO& v) { 
    v.rosters = j.at("rosters").get<std::vector<RosterMemberDTO>>(); 
  }
} 