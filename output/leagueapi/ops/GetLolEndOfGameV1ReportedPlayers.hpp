#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<uint64_t>> GetLolEndOfGameV1ReportedPlayers (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-end-of-game/v1/reported-players?", { 
    }, { 
    },"") };
  }
} 