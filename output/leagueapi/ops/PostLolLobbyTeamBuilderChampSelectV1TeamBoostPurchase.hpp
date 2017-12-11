#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyTeamBuilderChampSelectV1TeamBoostPurchase (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby-team-builder/champ-select/v1/team-boost/purchase?", { 
    }, { 
    },"") };
  }
} 