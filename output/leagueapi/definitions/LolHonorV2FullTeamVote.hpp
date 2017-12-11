#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolHonorV2FullTeamVote { /**/ 
    uint64_t gameId;/**/
  };
  static void to_json(json& j, const LolHonorV2FullTeamVote& v) { 
    j["gameId"] = v.gameId;
  }
  static void from_json(const json& j, LolHonorV2FullTeamVote& v) { 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
} 